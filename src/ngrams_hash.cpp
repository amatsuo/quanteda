#include <Rcpp.h>
#include <unordered_map>
#include <numeric>
#include "dev.h"
#include "quanteda.h"

// [[Rcpp::plugins(cpp11)]]
using namespace Rcpp;
using namespace std;
using namespace quanteda;

typedef std::vector<unsigned int> Ngram;
typedef std::vector<unsigned int> Ngrams;

namespace std {
template <>

// Custom hash function for Ngram objects
    struct hash<Ngram> {
        std::size_t operator()(const Ngram &vec) const {
            unsigned int seed = std::accumulate(vec.begin(), vec.end(), 0);
            return std::hash<unsigned int>()(seed);
        }
    };
    // struct hash<Ngram> {
    //     std::size_t operator()(const Ngram &vec) const {
    //         unsigned int seed = 0;
    //         for(int i; i < vec.size(); i++){
    //             //seed += vec[i] * std::pow(10, i);
    //             seed += vec[i] << i;
    //         }
    //         return std::hash<unsigned int>()(seed);
    //     }
    // };
}

int ngram_id(Ngram ngram,
             std::unordered_map<Ngram, unsigned int> &map_ngram){
    
    // Add new ID without multiple access
    unsigned int &id_ngram = map_ngram[ngram];
    if(id_ngram){
        //Rcout << "Old " << id_ngram << ": ";
        //dev::print_ngram_hashed(ngram);
        return id_ngram;
    }
    id_ngram = map_ngram.size();
    //Rcout << "New " << id_ngram << ": ";
    //dev::print_ngram_hashed(ngram);
    return id_ngram;
}

void skip_hashed(IntegerVector &tokens,
                 unsigned int start,
                 unsigned int n, 
                 IntegerVector skips,
                 Ngram ngram,
                 Ngrams &ngrams,
                 std::unordered_map<Ngram, unsigned int> &map_ngram,
                 int pos_tokens, int &pos_ngrams) {
    
    // if(tokens[start] == 0){
    //     pos_ngrams++;
    //     return;
    // }
    ngram[pos_tokens] = tokens[start];
    pos_tokens++;
    
    //Rcout << "Token " << tokens[start] << "\n";
    if(pos_tokens < n){
        for (int j = 0; j < skips.size(); j++){
            int next = start + skips[j];
            if(next < 0 || tokens.size() - 1 < next) break;
            if(tokens[next] == 0) break; // Skip padding
            //Rcout << "Join " << tokens[start] << " at " << pos_tokens << " " << next << "\n";
            skip_hashed(tokens, next, n, skips, ngram, ngrams, map_ngram, pos_tokens, pos_ngrams);
        }
    }else{
        ngrams[pos_ngrams] = ngram_id(ngram, map_ngram);
        //Rcout << "Add " << ngrams[pos_ngrams] << " at " << pos_ngrams << "/" << ngrams.size() << "\n";
        pos_tokens = 0;
        pos_ngrams++;
    }
}


Ngrams skipgram_hashed(IntegerVector tokens,
                       IntegerVector ns, 
                       IntegerVector skips,
                       std::unordered_map<Ngram, unsigned int> &map_ngram) {
    
    int pos_tokens = 0; // Position in tokens
    int pos_ngrams = 0; // Position in ngrams
    
    // Pre-allocate memory
    int size_reserve = 0;
    for (int k = 0; k < ns.size(); k++) {
        size_reserve += std::pow(skips.size(), ns[k]) * tokens.size();
    }
    Ngrams ngrams(size_reserve);
    
    // Generate skipgrams recursively
    for (int k = 0; k < ns.size(); k++) {
        int n = ns[k];
        Ngram ngram(n);
        for (int start = 0; start < tokens.size() - (n - 1); start++) {
            if(tokens[start] == 0) continue; // Skip padding
            skip_hashed(tokens, start, n, skips, ngram, ngrams, map_ngram, pos_tokens, pos_ngrams); // Get ngrams as reference
        }
    }
    ngrams.resize(pos_ngrams);
    return ngrams;
}

// [[Rcpp::export]]
List qatd_cpp_ngram_hashed_vector(IntegerVector tokens,
                                  IntegerVector ns, 
                                  IntegerVector skips){
    
    // Register both ngram (key) and unigram (value) IDs in a hash table
    std::unordered_map<Ngram, unsigned int> map_ngram;
    Ngrams ngrams = skipgram_hashed(tokens, ns, skips, map_ngram);
    
    // Separate key and values of unordered_map
    List ids_unigram(map_ngram.size());
    for (std::pair<Ngram, unsigned int> iter : map_ngram){
        //Rcout << "ID " << to_string(iter.second) << ": ";
        //print_ngram_hashed(iter.first);
        ids_unigram[iter.second - 1] = iter.first;
    }
    
    return Rcpp::List::create(Rcpp::Named("ngram") = ngrams,
                              Rcpp::Named("id_unigram") = ids_unigram);
}

// [[Rcpp::export]]
List qatd_cpp_ngram_hashed_list(List texts,
                                IntegerVector ns,
                                IntegerVector skips) {
    
    // Register both ngram (key) and unigram (value) IDs in a hash table
    std::unordered_map<Ngram, unsigned int> map_ngram;
    
    // Itterate over documents
    List texts_ngram(texts.size());
    for (int h = 0; h < texts.size(); h++){
        texts_ngram[h] = skipgram_hashed(texts[h], ns, skips, map_ngram);
        Rcpp::checkUserInterrupt(); // allow user to stop
    }
    
    // Separate key and values of unordered_map
    List ids_unigram(map_ngram.size());
    for (std::pair<Ngram, unsigned int> iter : map_ngram){
        //Rcout << "ID " << to_string(iter.second) << ": ";
        //print_ngram_hashed(iter.first);
        ids_unigram[iter.second - 1] = iter.first;
    }
    
    return Rcpp::List::create(Rcpp::Named("text") = texts_ngram,
                              Rcpp::Named("id_unigram") = ids_unigram);
}

// [[Rcpp::export]]
CharacterVector qatd_cpp_ngram_unhash_type(ListOf<IntegerVector> ids_ngram, 
                                           CharacterVector tokens, String delim){
    tokens.push_front(""); // offset tokens to match index in C++
    CharacterVector tokens_ngram(ids_ngram.size());
    for(int i=0; i < ids_ngram.size(); i++){
        tokens_ngram[i] = join_character_vector(tokens[ids_ngram[i]], delim);
    }
    return tokens_ngram;
}



/*** R

library(quanteda)
txt <- c('a b c d e', 'c d e f g')
toks <- tokens(txt, what='fastestword')
toks[[1]][3] <- 0
res <- qatd_cpp_ngram_hashed_list(toks, 2, 1)
res$text
res$id_unigram
# 
# toks_char <- rep(letters, 100)
# toks_int <- rep(1:26, 100)
# 
# tokens <- rep(head(letters), 2)
# types <- unique(tokens)
# tokens_hashed <- match(tokens, types)
# res <- qatd_cpp_ngram_hashed_vector(tokens_hashed, 3, 1)
# ngram <- res$ngram
# ngram_ids <- res$id_ngram
# vocaburary <- sapply(res$id_unigram, function(x, y, z) paste(y[x], collapse=z) , types, '-')
# vocaburary[ngram]


# txt_all <- readLines('~/Documents/Brixit/Analysis/all_bbc_2015.txt')
# tok_all <- tokens(txt_all, removeSymbols = TRUE, removeNumbers = TRUE)
# microbenchmark::microbenchmark(
#     ngrams(tok_all, 2),
#     #ngrams(tok_all, 3),
#     #ngrams(tok_all, 4),
#     times=1
# )
# 
# profvis::profvis(ngrams(tok_all, 2))

*/

