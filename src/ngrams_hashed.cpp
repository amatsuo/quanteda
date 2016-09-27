#include <Rcpp.h>
#include <string>
#include <algorithm>
#include <unordered_map>
// [[Rcpp::plugins(cpp11)]]
using namespace Rcpp;
using namespace std;

//typedef std::vector<unsigned int> UnsignedIntegerVector;
// namespace std {
//   template <>
//   struct hash<NumericVector>
//   {
//     std::size_t operator()(const NumericVector& vec) const
//     {
//       // Hash function for NmericVector
//       // See http://stackoverflow.com/questions/17016175
//       std::size_t hash = 17;
//       for(auto& elm : vec) {
//         hash = 31 * hash + std::hash<int>()(elm);
//       }
//       //Rcout << "Hash " << ": "<< hash << "\n";
//       return hash;
//     }
//   };
// }


int generate(NumericVector ngram,
             std::unordered_map<unsigned int, NumericVector> &map_ngram){
  
  // Hash function for NmericVector
  // See http://stackoverflow.com/questions/17016175
  std::size_t id_ngram = 17;
  for(int id_token : ngram) {
    id_ngram = 31 * id_ngram + std::hash<int>()(id_token);
  }
  map_ngram[id_ngram] = clone(ngram);
  //Rcout << "ID: " << id_ngram << " for " << map_ngram[id_ngram] << "\n";
  return id_ngram;
  
}

void skip_hashed(NumericVector &tokens,
          unsigned int start,
          unsigned int n, 
          NumericVector skips,
          NumericVector ngram,
          NumericVector &ngrams,
          std::unordered_map<unsigned int, NumericVector> &map_ngram,
          int e, int &f
){
    
    ngram[e] = tokens[start];
    e++;
    
    //Rcout << "Token " << tokens[start] << "\n";
    if(e < n){
        for (int j = 0; j < skips.size(); j++){
            int next = start + skips[j];
            if(next < 0 || tokens.size() - 1 < next) break;
            //Rcout << "Join " << ngram << " at " << e << " " << next << "\n";
            skip_hashed(tokens, next, n, skips, ngram, ngrams, map_ngram, e, f);
        }
    }else{
        //Rcout << "Add " << ngram << " at " << f << "/" << ngrams.size() << "\n";
        ngrams[f] = generate(ngram, map_ngram);
        e = 0;
        f++;
    }
}


NumericVector skipgramcpp_hashed(NumericVector tokens,
                                 NumericVector ns, 
                                 NumericVector skips,
                                 std::unordered_map<unsigned int, NumericVector> &map_ngram) {
    
    int len_tokens = tokens.size();
    int len_ns = ns.size();
    int len_skips = skips.size();
    int e = 0; // Local index for unigrams in ngram
    int f = 0; // Global index for generated ngrams 
    NumericVector ngrams(std::pow(len_ns * len_tokens, len_skips)); // Pre-allocate memory
    
    // Generate skipgrams recursively
    for (int g = 0; g < len_ns; g++) {
        int n = ns[g];
        NumericVector ngram(n);
        for (int start = 0; start < len_tokens - (n - 1); start++) {
          skip_hashed(tokens, start, n, skips, ngram, ngrams, map_ngram, e, f); // Get ngrams as reference
        }
    }

    return ngrams[seq(0, f - 1)];
}

// [[Rcpp::export]]
List skipgramcpp_hashed_vector(NumericVector tokens,
                               NumericVector ns, 
                               NumericVector skips){
  // Register both ngram (key) and unigram (value) IDs in a hash table
  std::unordered_map<unsigned int, NumericVector> map_ngram;
  NumericVector ngrams = skipgramcpp_hashed(tokens, ns, skips, map_ngram);
  
  // Separate key and values of unordered_map
  NumericVector ids_ngram;
  List ids_unigram;
  for (std::pair<unsigned int, NumericVector> iter : map_ngram){
    //Rcout << "ID: " << iter.first << " for " << iter.second << "\n";
    ids_ngram.push_back(iter.first);
    ids_unigram.push_back(iter.second);
  }
  
  return Rcpp::List::create(Rcpp::Named("ngram") = ngrams,
                            Rcpp::Named("id_ngram") = ids_ngram,
                            Rcpp::Named("id_unigram") = ids_unigram);
}

// [[Rcpp::export]]
List skipgramcpp_hashed_list(List texts,
                         NumericVector ns,
                         NumericVector skips) {

  // Register both ngram (key) and unigram (value) IDs in a hash table
  std::unordered_map<unsigned int, NumericVector> map_ngram;

  int len = texts.size();
  List texts_ngram(len);
  for (int h = 0; h < len; h++){
      texts_ngram[h] = skipgramcpp_hashed(texts[h], ns, skips, map_ngram);
  }

  // Separate key and values of unordered_map
  NumericVector ids_ngram;
  List ids_unigram;
  for (std::pair<unsigned int, NumericVector> iter : map_ngram){
      //Rcout << "ID: " << iter.first << " for " << iter.second << "\n";
      ids_ngram.push_back(iter.first);
      ids_unigram.push_back(iter.second);
  }

  return Rcpp::List::create(Rcpp::Named("text") = texts_ngram,
                            Rcpp::Named("id_ngram") = ids_ngram,
                            Rcpp::Named("id_unigram") = ids_unigram);
}

/*** R
tokens <- rep(letters[1:5], 20)
types <- unique(tokens)
toks_hash <- match(tokens, types)

#microbenchmark::microbenchmark(skipgramcpp(tokens, 2:3, 1:2, '-'),
#                               skipgramcpp_hashed_vector(toks_hash, 2:3, 1:2))

res <- skipgramcpp_hashed_vector(toks_hash, 2, 1)
ngram <- res$ngram
ngram_ids <- res$id_ngram
ngram_types <- unlist(lapply(res$id_unigram, function(x, y, z) paste(y[x], collapse=z) , types, '-'))
names(ngram_ids) <- ngram_types
names(ngram_ids[match(ngram, ngram_ids)])
*/

