// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// qatd_ManhattanPara_cpp
NumericMatrix qatd_ManhattanPara_cpp(const arma::sp_mat& A, const int margin);
RcppExport SEXP quanteda_qatd_ManhattanPara_cpp(SEXP ASEXP, SEXP marginSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const int >::type margin(marginSEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_ManhattanPara_cpp(A, margin));
    return rcpp_result_gen;
END_RCPP
}
// qatd_ManhattanPara_cpp2
NumericMatrix qatd_ManhattanPara_cpp2(const arma::sp_mat& A, const arma::sp_mat& B, const int margin);
RcppExport SEXP quanteda_qatd_ManhattanPara_cpp2(SEXP ASEXP, SEXP BSEXP, SEXP marginSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const int >::type margin(marginSEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_ManhattanPara_cpp2(A, B, margin));
    return rcpp_result_gen;
END_RCPP
}
// qatd_MaximumPara_cpp
NumericMatrix qatd_MaximumPara_cpp(const arma::sp_mat& A, const int margin);
RcppExport SEXP quanteda_qatd_MaximumPara_cpp(SEXP ASEXP, SEXP marginSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const int >::type margin(marginSEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_MaximumPara_cpp(A, margin));
    return rcpp_result_gen;
END_RCPP
}
// qatd_MaximumPara_cpp2
NumericMatrix qatd_MaximumPara_cpp2(const arma::sp_mat& A, const arma::sp_mat& B, const int margin);
RcppExport SEXP quanteda_qatd_MaximumPara_cpp2(SEXP ASEXP, SEXP BSEXP, SEXP marginSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const int >::type margin(marginSEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_MaximumPara_cpp2(A, B, margin));
    return rcpp_result_gen;
END_RCPP
}
// qatd_CanberraPara_cpp
NumericMatrix qatd_CanberraPara_cpp(const arma::sp_mat& A, const int margin);
RcppExport SEXP quanteda_qatd_CanberraPara_cpp(SEXP ASEXP, SEXP marginSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const int >::type margin(marginSEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_CanberraPara_cpp(A, margin));
    return rcpp_result_gen;
END_RCPP
}
// qatd_CanberraPara_cpp2
NumericMatrix qatd_CanberraPara_cpp2(const arma::sp_mat& A, const arma::sp_mat& B, const int margin);
RcppExport SEXP quanteda_qatd_CanberraPara_cpp2(SEXP ASEXP, SEXP BSEXP, SEXP marginSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const int >::type margin(marginSEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_CanberraPara_cpp2(A, B, margin));
    return rcpp_result_gen;
END_RCPP
}
// qatd_MinkowskiPara_cpp
NumericMatrix qatd_MinkowskiPara_cpp(const arma::sp_mat& A, const int margin, const double p);
RcppExport SEXP quanteda_qatd_MinkowskiPara_cpp(SEXP ASEXP, SEXP marginSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const int >::type margin(marginSEXP);
    Rcpp::traits::input_parameter< const double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_MinkowskiPara_cpp(A, margin, p));
    return rcpp_result_gen;
END_RCPP
}
// qatd_MinkowskiPara_cpp2
NumericMatrix qatd_MinkowskiPara_cpp2(const arma::sp_mat& A, const arma::sp_mat& B, const int margin, const double p);
RcppExport SEXP quanteda_qatd_MinkowskiPara_cpp2(SEXP ASEXP, SEXP BSEXP, SEXP marginSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const int >::type margin(marginSEXP);
    Rcpp::traits::input_parameter< const double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_MinkowskiPara_cpp2(A, B, margin, p));
    return rcpp_result_gen;
END_RCPP
}
// fcm_cpp
arma::sp_mat fcm_cpp(Rcpp::List& texts, const CharacterVector& types, const String& count, const int& window, const NumericVector& weights, const bool& ordered, const bool& tri, const int& nvec);
RcppExport SEXP quanteda_fcm_cpp(SEXP textsSEXP, SEXP typesSEXP, SEXP countSEXP, SEXP windowSEXP, SEXP weightsSEXP, SEXP orderedSEXP, SEXP triSEXP, SEXP nvecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type texts(textsSEXP);
    Rcpp::traits::input_parameter< const CharacterVector& >::type types(typesSEXP);
    Rcpp::traits::input_parameter< const String& >::type count(countSEXP);
    Rcpp::traits::input_parameter< const int& >::type window(windowSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type ordered(orderedSEXP);
    Rcpp::traits::input_parameter< const bool& >::type tri(triSEXP);
    Rcpp::traits::input_parameter< const int& >::type nvec(nvecSEXP);
    rcpp_result_gen = Rcpp::wrap(fcm_cpp(texts, types, count, window, weights, ordered, tri, nvec));
    return rcpp_result_gen;
END_RCPP
}
// fcm_hash_cpp
arma::sp_mat fcm_hash_cpp(Rcpp::List& texts, const int& n_types, const String& count, const int& window, const NumericVector& weights, const bool& ordered, const bool& tri, const int& nvec);
RcppExport SEXP quanteda_fcm_hash_cpp(SEXP textsSEXP, SEXP n_typesSEXP, SEXP countSEXP, SEXP windowSEXP, SEXP weightsSEXP, SEXP orderedSEXP, SEXP triSEXP, SEXP nvecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type texts(textsSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_types(n_typesSEXP);
    Rcpp::traits::input_parameter< const String& >::type count(countSEXP);
    Rcpp::traits::input_parameter< const int& >::type window(windowSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type ordered(orderedSEXP);
    Rcpp::traits::input_parameter< const bool& >::type tri(triSEXP);
    Rcpp::traits::input_parameter< const int& >::type nvec(nvecSEXP);
    rcpp_result_gen = Rcpp::wrap(fcm_hash_cpp(texts, n_types, count, window, weights, ordered, tri, nvec));
    return rcpp_result_gen;
END_RCPP
}
// find_sequence_cppl
Rcpp::List find_sequence_cppl(List texts, const std::vector<std::string>& types, const int& count_min, const double& smooth, const bool& nested);
RcppExport SEXP quanteda_find_sequence_cppl(SEXP textsSEXP, SEXP typesSEXP, SEXP count_minSEXP, SEXP smoothSEXP, SEXP nestedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type texts(textsSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type types(typesSEXP);
    Rcpp::traits::input_parameter< const int& >::type count_min(count_minSEXP);
    Rcpp::traits::input_parameter< const double& >::type smooth(smoothSEXP);
    Rcpp::traits::input_parameter< const bool& >::type nested(nestedSEXP);
    rcpp_result_gen = Rcpp::wrap(find_sequence_cppl(texts, types, count_min, smooth, nested));
    return rcpp_result_gen;
END_RCPP
}
// qutd_cpp_sequences
List qutd_cpp_sequences(List texts_, IntegerVector words_, int count_min, bool nested);
RcppExport SEXP quanteda_qutd_cpp_sequences(SEXP texts_SEXP, SEXP words_SEXP, SEXP count_minSEXP, SEXP nestedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type texts_(texts_SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type words_(words_SEXP);
    Rcpp::traits::input_parameter< int >::type count_min(count_minSEXP);
    Rcpp::traits::input_parameter< bool >::type nested(nestedSEXP);
    rcpp_result_gen = Rcpp::wrap(qutd_cpp_sequences(texts_, words_, count_min, nested));
    return rcpp_result_gen;
END_RCPP
}
// qatd_cpp_unhash
ListOf<CharacterVector> qatd_cpp_unhash(ListOf<IntegerVector> tokens_int, CharacterVector types);
RcppExport SEXP quanteda_qatd_cpp_unhash(SEXP tokens_intSEXP, SEXP typesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< ListOf<IntegerVector> >::type tokens_int(tokens_intSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type types(typesSEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_cpp_unhash(tokens_int, types));
    return rcpp_result_gen;
END_RCPP
}
// qatd_cpp_tokens_detect
List qatd_cpp_tokens_detect(List texts_, List words_);
RcppExport SEXP quanteda_qatd_cpp_tokens_detect(SEXP texts_SEXP, SEXP words_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type texts_(texts_SEXP);
    Rcpp::traits::input_parameter< List >::type words_(words_SEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_cpp_tokens_detect(texts_, words_));
    return rcpp_result_gen;
END_RCPP
}
// qatd_cpp_tokens_lookup
List qatd_cpp_tokens_lookup(List texts_, List keys_, IntegerVector ids_);
RcppExport SEXP quanteda_qatd_cpp_tokens_lookup(SEXP texts_SEXP, SEXP keys_SEXP, SEXP ids_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type texts_(texts_SEXP);
    Rcpp::traits::input_parameter< List >::type keys_(keys_SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type ids_(ids_SEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_cpp_tokens_lookup(texts_, keys_, ids_));
    return rcpp_result_gen;
END_RCPP
}
// qatd_cpp_tokens_ngrams
List qatd_cpp_tokens_ngrams(List texts_, CharacterVector types_, String delim_, IntegerVector ns_, IntegerVector skips_);
RcppExport SEXP quanteda_qatd_cpp_tokens_ngrams(SEXP texts_SEXP, SEXP types_SEXP, SEXP delim_SEXP, SEXP ns_SEXP, SEXP skips_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type texts_(texts_SEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type types_(types_SEXP);
    Rcpp::traits::input_parameter< String >::type delim_(delim_SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type ns_(ns_SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type skips_(skips_SEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_cpp_tokens_ngrams(texts_, types_, delim_, ns_, skips_));
    return rcpp_result_gen;
END_RCPP
}
// qatd_cpp_tokens_replace
List qatd_cpp_tokens_replace(List texts_, List words_, IntegerVector ids_);
RcppExport SEXP quanteda_qatd_cpp_tokens_replace(SEXP texts_SEXP, SEXP words_SEXP, SEXP ids_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type texts_(texts_SEXP);
    Rcpp::traits::input_parameter< List >::type words_(words_SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type ids_(ids_SEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_cpp_tokens_replace(texts_, words_, ids_));
    return rcpp_result_gen;
END_RCPP
}
// qatd_cpp_tokens_select
List qatd_cpp_tokens_select(List texts_, List words_, int mode_, bool padding_);
RcppExport SEXP quanteda_qatd_cpp_tokens_select(SEXP texts_SEXP, SEXP words_SEXP, SEXP mode_SEXP, SEXP padding_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type texts_(texts_SEXP);
    Rcpp::traits::input_parameter< List >::type words_(words_SEXP);
    Rcpp::traits::input_parameter< int >::type mode_(mode_SEXP);
    Rcpp::traits::input_parameter< bool >::type padding_(padding_SEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_cpp_tokens_select(texts_, words_, mode_, padding_));
    return rcpp_result_gen;
END_RCPP
}
// qatd_cpp_deepcopy
SEXP qatd_cpp_deepcopy(SEXP x_);
RcppExport SEXP quanteda_qatd_cpp_deepcopy(SEXP x_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x_(x_SEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_cpp_deepcopy(x_));
    return rcpp_result_gen;
END_RCPP
}
// qatd_cpp_structcopy_int_list
List qatd_cpp_structcopy_int_list(List list_);
RcppExport SEXP quanteda_qatd_cpp_structcopy_int_list(SEXP list_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type list_(list_SEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_cpp_structcopy_int_list(list_));
    return rcpp_result_gen;
END_RCPP
}
// qatd_cpp_remove_chr_list
List qatd_cpp_remove_chr_list(List list_, String elem_remove);
RcppExport SEXP quanteda_qatd_cpp_remove_chr_list(SEXP list_SEXP, SEXP elem_removeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type list_(list_SEXP);
    Rcpp::traits::input_parameter< String >::type elem_remove(elem_removeSEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_cpp_remove_chr_list(list_, elem_remove));
    return rcpp_result_gen;
END_RCPP
}
// qatd_cpp_remove_int_list
List qatd_cpp_remove_int_list(List list_, int elem_remove);
RcppExport SEXP quanteda_qatd_cpp_remove_int_list(SEXP list_SEXP, SEXP elem_removeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type list_(list_SEXP);
    Rcpp::traits::input_parameter< int >::type elem_remove(elem_removeSEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_cpp_remove_int_list(list_, elem_remove));
    return rcpp_result_gen;
END_RCPP
}
// wordfishcpp
Rcpp::List wordfishcpp(SEXP wfm, SEXP dir, SEXP priors, SEXP tol, SEXP disp, SEXP dispfloor);
RcppExport SEXP quanteda_wordfishcpp(SEXP wfmSEXP, SEXP dirSEXP, SEXP priorsSEXP, SEXP tolSEXP, SEXP dispSEXP, SEXP dispfloorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type wfm(wfmSEXP);
    Rcpp::traits::input_parameter< SEXP >::type dir(dirSEXP);
    Rcpp::traits::input_parameter< SEXP >::type priors(priorsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< SEXP >::type disp(dispSEXP);
    Rcpp::traits::input_parameter< SEXP >::type dispfloor(dispfloorSEXP);
    rcpp_result_gen = Rcpp::wrap(wordfishcpp(wfm, dir, priors, tol, disp, dispfloor));
    return rcpp_result_gen;
END_RCPP
}
