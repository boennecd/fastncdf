// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// fastpnorm
NumericVector fastpnorm(NumericVector q);
RcppExport SEXP _fastncdf_fastpnorm(SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type q(qSEXP);
    rcpp_result_gen = Rcpp::wrap(fastpnorm(q));
    return rcpp_result_gen;
END_RCPP
}
// fastpnorm_preallocated
void fastpnorm_preallocated(NumericVector p, NumericVector q);
RcppExport SEXP _fastncdf_fastpnorm_preallocated(SEXP pSEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type q(qSEXP);
    fastpnorm_preallocated(p, q);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_fastncdf_fastpnorm", (DL_FUNC) &_fastncdf_fastpnorm, 1},
    {"_fastncdf_fastpnorm_preallocated", (DL_FUNC) &_fastncdf_fastpnorm_preallocated, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_fastncdf(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}