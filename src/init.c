#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP _quanteda_cacpp(SEXP, SEXP, SEXP);
extern SEXP _quanteda_qatd_CanberraPara_cpp(SEXP, SEXP);
extern SEXP _quanteda_qatd_CanberraPara_cpp2(SEXP, SEXP, SEXP);
extern SEXP _quanteda_qatd_cpp_chars_remove(SEXP, SEXP);
extern SEXP _quanteda_qatd_cpp_fcm(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _quanteda_qatd_cpp_kwic(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _quanteda_qatd_cpp_sequences(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _quanteda_qatd_cpp_sequences_old(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _quanteda_qatd_cpp_tbb_enabled();
extern SEXP _quanteda_qatd_cpp_tokens_compound(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _quanteda_qatd_cpp_tokens_detect(SEXP, SEXP);
extern SEXP _quanteda_qatd_cpp_tokens_lookup(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _quanteda_qatd_cpp_tokens_match(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _quanteda_qatd_cpp_tokens_ngrams(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _quanteda_qatd_cpp_tokens_recompile(SEXP, SEXP);
extern SEXP _quanteda_qatd_cpp_tokens_replace(SEXP, SEXP, SEXP, SEXP);
extern SEXP _quanteda_qatd_cpp_tokens_select(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _quanteda_qatd_ManhattanPara_cpp(SEXP, SEXP);
extern SEXP _quanteda_qatd_ManhattanPara_cpp2(SEXP, SEXP, SEXP);
extern SEXP _quanteda_qatd_MaximumPara_cpp(SEXP, SEXP);
extern SEXP _quanteda_qatd_MaximumPara_cpp2(SEXP, SEXP, SEXP);
extern SEXP _quanteda_qatd_MinkowskiPara_cpp(SEXP, SEXP, SEXP);
extern SEXP _quanteda_qatd_MinkowskiPara_cpp2(SEXP, SEXP, SEXP, SEXP);
extern SEXP _quanteda_wordfishcpp(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _quanteda_wordfishcpp_dense(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _quanteda_wordfishcpp_mt(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
  {"_quanteda_cacpp",                     (DL_FUNC) &_quanteda_cacpp,                     3},
  {"_quanteda_qatd_CanberraPara_cpp",     (DL_FUNC) &_quanteda_qatd_CanberraPara_cpp,     2},
  {"_quanteda_qatd_CanberraPara_cpp2",    (DL_FUNC) &_quanteda_qatd_CanberraPara_cpp2,    3},
  {"_quanteda_qatd_cpp_chars_remove",     (DL_FUNC) &_quanteda_qatd_cpp_chars_remove,     2},
  {"_quanteda_qatd_cpp_fcm",              (DL_FUNC) &_quanteda_qatd_cpp_fcm,              8},
  {"_quanteda_qatd_cpp_kwic",             (DL_FUNC) &_quanteda_qatd_cpp_kwic,             5},
  {"_quanteda_qatd_cpp_sequences",        (DL_FUNC) &_quanteda_qatd_cpp_sequences,        6},
  {"_quanteda_qatd_cpp_sequences_old",    (DL_FUNC) &_quanteda_qatd_cpp_sequences_old,    7},
  {"_quanteda_qatd_cpp_tbb_enabled",      (DL_FUNC) &_quanteda_qatd_cpp_tbb_enabled,      0},
  {"_quanteda_qatd_cpp_tokens_compound",  (DL_FUNC) &_quanteda_qatd_cpp_tokens_compound,  5},
  {"_quanteda_qatd_cpp_tokens_detect",    (DL_FUNC) &_quanteda_qatd_cpp_tokens_detect,    2},
  {"_quanteda_qatd_cpp_tokens_lookup",    (DL_FUNC) &_quanteda_qatd_cpp_tokens_lookup,    5},
  {"_quanteda_qatd_cpp_tokens_match",     (DL_FUNC) &_quanteda_qatd_cpp_tokens_match,     5},
  {"_quanteda_qatd_cpp_tokens_ngrams",    (DL_FUNC) &_quanteda_qatd_cpp_tokens_ngrams,    5},
  {"_quanteda_qatd_cpp_tokens_recompile", (DL_FUNC) &_quanteda_qatd_cpp_tokens_recompile, 2},
  {"_quanteda_qatd_cpp_tokens_replace",   (DL_FUNC) &_quanteda_qatd_cpp_tokens_replace,   4},
  {"_quanteda_qatd_cpp_tokens_select",    (DL_FUNC) &_quanteda_qatd_cpp_tokens_select,    5},
  {"_quanteda_qatd_ManhattanPara_cpp",    (DL_FUNC) &_quanteda_qatd_ManhattanPara_cpp,    2},
  {"_quanteda_qatd_ManhattanPara_cpp2",   (DL_FUNC) &_quanteda_qatd_ManhattanPara_cpp2,   3},
  {"_quanteda_qatd_MaximumPara_cpp",      (DL_FUNC) &_quanteda_qatd_MaximumPara_cpp,      2},
  {"_quanteda_qatd_MaximumPara_cpp2",     (DL_FUNC) &_quanteda_qatd_MaximumPara_cpp2,     3},
  {"_quanteda_qatd_MinkowskiPara_cpp",    (DL_FUNC) &_quanteda_qatd_MinkowskiPara_cpp,    3},
  {"_quanteda_qatd_MinkowskiPara_cpp2",   (DL_FUNC) &_quanteda_qatd_MinkowskiPara_cpp2,   4},
  {"_quanteda_wordfishcpp",               (DL_FUNC) &_quanteda_wordfishcpp,               9},
  {"_quanteda_wordfishcpp_dense",         (DL_FUNC) &_quanteda_wordfishcpp_dense,         7},
  {"_quanteda_wordfishcpp_mt",            (DL_FUNC) &_quanteda_wordfishcpp_mt,            9},
  {NULL, NULL, 0}
};

void R_init_quanteda(DllInfo *dll)
{
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
