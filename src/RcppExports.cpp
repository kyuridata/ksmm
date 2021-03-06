// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// smo_smm
List smo_smm(ListMatrix K, List init_sd, arma::mat W, NumericVector init_a, NumericVector y, double C, int dim_x, int dim_y, double epsilon, int maxit);
RcppExport SEXP _ksmm_smo_smm(SEXP KSEXP, SEXP init_sdSEXP, SEXP WSEXP, SEXP init_aSEXP, SEXP ySEXP, SEXP CSEXP, SEXP dim_xSEXP, SEXP dim_ySEXP, SEXP epsilonSEXP, SEXP maxitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< ListMatrix >::type K(KSEXP);
    Rcpp::traits::input_parameter< List >::type init_sd(init_sdSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type init_a(init_aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type C(CSEXP);
    Rcpp::traits::input_parameter< int >::type dim_x(dim_xSEXP);
    Rcpp::traits::input_parameter< int >::type dim_y(dim_ySEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    rcpp_result_gen = Rcpp::wrap(smo_smm(K, init_sd, W, init_a, y, C, dim_x, dim_y, epsilon, maxit));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ksmm_smo_smm", (DL_FUNC) &_ksmm_smo_smm, 10},
    {NULL, NULL, 0}
};

RcppExport void R_init_ksmm(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
