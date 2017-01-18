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
arma::sp_mat fcm_cpp(Rcpp::List& texts, const CharacterVector& types, const String& count, const unsigned int& window, const NumericVector& weights, const bool& ordered, const bool& tri, const unsigned int& nvec);
RcppExport SEXP quanteda_fcm_cpp(SEXP textsSEXP, SEXP typesSEXP, SEXP countSEXP, SEXP windowSEXP, SEXP weightsSEXP, SEXP orderedSEXP, SEXP triSEXP, SEXP nvecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type texts(textsSEXP);
    Rcpp::traits::input_parameter< const CharacterVector& >::type types(typesSEXP);
    Rcpp::traits::input_parameter< const String& >::type count(countSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type window(windowSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type ordered(orderedSEXP);
    Rcpp::traits::input_parameter< const bool& >::type tri(triSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type nvec(nvecSEXP);
    rcpp_result_gen = Rcpp::wrap(fcm_cpp(texts, types, count, window, weights, ordered, tri, nvec));
    return rcpp_result_gen;
END_RCPP
}
// fcm_hash_cpp
arma::sp_mat fcm_hash_cpp(Rcpp::List& texts, const int& n_types, const String& count, const unsigned int& window, const NumericVector& weights, const bool& ordered, const bool& tri, const unsigned int& nvec);
RcppExport SEXP quanteda_fcm_hash_cpp(SEXP textsSEXP, SEXP n_typesSEXP, SEXP countSEXP, SEXP windowSEXP, SEXP weightsSEXP, SEXP orderedSEXP, SEXP triSEXP, SEXP nvecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type texts(textsSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_types(n_typesSEXP);
    Rcpp::traits::input_parameter< const String& >::type count(countSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type window(windowSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type ordered(orderedSEXP);
    Rcpp::traits::input_parameter< const bool& >::type tri(triSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type nvec(nvecSEXP);
    rcpp_result_gen = Rcpp::wrap(fcm_hash_cpp(texts, n_types, count, window, weights, ordered, tri, nvec));
    return rcpp_result_gen;
END_RCPP
}
// qatd_cpp_sequences
List qatd_cpp_sequences(const List& texts_, const IntegerVector& words_, const unsigned int count_min, unsigned int len_max, bool nested, bool ordered);
RcppExport SEXP quanteda_qatd_cpp_sequences(SEXP texts_SEXP, SEXP words_SEXP, SEXP count_minSEXP, SEXP len_maxSEXP, SEXP nestedSEXP, SEXP orderedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type texts_(texts_SEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type words_(words_SEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type count_min(count_minSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type len_max(len_maxSEXP);
    Rcpp::traits::input_parameter< bool >::type nested(nestedSEXP);
    Rcpp::traits::input_parameter< bool >::type ordered(orderedSEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_cpp_sequences(texts_, words_, count_min, len_max, nested, ordered));
    return rcpp_result_gen;
END_RCPP
}
// qatd_cpp_tokens_detect
List qatd_cpp_tokens_detect(const List& texts_, const List& words_);
RcppExport SEXP quanteda_qatd_cpp_tokens_detect(SEXP texts_SEXP, SEXP words_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type texts_(texts_SEXP);
    Rcpp::traits::input_parameter< const List& >::type words_(words_SEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_cpp_tokens_detect(texts_, words_));
    return rcpp_result_gen;
END_RCPP
}
// qatd_cpp_tokens_lookup
List qatd_cpp_tokens_lookup(const List& texts_, const List& keys_, const IntegerVector& ids_);
RcppExport SEXP quanteda_qatd_cpp_tokens_lookup(SEXP texts_SEXP, SEXP keys_SEXP, SEXP ids_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type texts_(texts_SEXP);
    Rcpp::traits::input_parameter< const List& >::type keys_(keys_SEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ids_(ids_SEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_cpp_tokens_lookup(texts_, keys_, ids_));
    return rcpp_result_gen;
END_RCPP
}
// qatd_cpp_tokens_ngrams
List qatd_cpp_tokens_ngrams(const List texts_, const CharacterVector types_, const String delim_, const IntegerVector ns_, const IntegerVector skips_);
RcppExport SEXP quanteda_qatd_cpp_tokens_ngrams(SEXP texts_SEXP, SEXP types_SEXP, SEXP delim_SEXP, SEXP ns_SEXP, SEXP skips_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type texts_(texts_SEXP);
    Rcpp::traits::input_parameter< const CharacterVector >::type types_(types_SEXP);
    Rcpp::traits::input_parameter< const String >::type delim_(delim_SEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type ns_(ns_SEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type skips_(skips_SEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_cpp_tokens_ngrams(texts_, types_, delim_, ns_, skips_));
    return rcpp_result_gen;
END_RCPP
}
// qatd_cpp_tokens_replace
List qatd_cpp_tokens_replace(const List& texts_, const List& words_, const IntegerVector& ids_);
RcppExport SEXP quanteda_qatd_cpp_tokens_replace(SEXP texts_SEXP, SEXP words_SEXP, SEXP ids_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type texts_(texts_SEXP);
    Rcpp::traits::input_parameter< const List& >::type words_(words_SEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ids_(ids_SEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_cpp_tokens_replace(texts_, words_, ids_));
    return rcpp_result_gen;
END_RCPP
}
// qatd_cpp_tokens_select
List qatd_cpp_tokens_select(const List& texts_, const List& words_, int mode_, bool padding_);
RcppExport SEXP quanteda_qatd_cpp_tokens_select(SEXP texts_SEXP, SEXP words_SEXP, SEXP mode_SEXP, SEXP padding_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type texts_(texts_SEXP);
    Rcpp::traits::input_parameter< const List& >::type words_(words_SEXP);
    Rcpp::traits::input_parameter< int >::type mode_(mode_SEXP);
    Rcpp::traits::input_parameter< bool >::type padding_(padding_SEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_cpp_tokens_select(texts_, words_, mode_, padding_));
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
