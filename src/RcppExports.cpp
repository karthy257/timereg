// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/mets.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// ApplyBy
NumericMatrix ApplyBy(NumericMatrix idata, IntegerVector icluster, Function f);
RcppExport SEXP mets_ApplyBy(SEXP idataSEXP, SEXP iclusterSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type idata(idataSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type icluster(iclusterSEXP);
    Rcpp::traits::input_parameter< Function >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(ApplyBy(idata, icluster, f));
    return rcpp_result_gen;
END_RCPP
}
// loglikMVN
arma::mat loglikMVN(arma::mat Yl, SEXP yu, SEXP status, arma::mat Mu, SEXP dmu, arma::mat S, SEXP ds, SEXP z, SEXP su, SEXP dsu, SEXP threshold, SEXP dthreshold, bool Score);
static SEXP mets_loglikMVN_try(SEXP YlSEXP, SEXP yuSEXP, SEXP statusSEXP, SEXP MuSEXP, SEXP dmuSEXP, SEXP SSEXP, SEXP dsSEXP, SEXP zSEXP, SEXP suSEXP, SEXP dsuSEXP, SEXP thresholdSEXP, SEXP dthresholdSEXP, SEXP ScoreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Yl(YlSEXP);
    Rcpp::traits::input_parameter< SEXP >::type yu(yuSEXP);
    Rcpp::traits::input_parameter< SEXP >::type status(statusSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Mu(MuSEXP);
    Rcpp::traits::input_parameter< SEXP >::type dmu(dmuSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type S(SSEXP);
    Rcpp::traits::input_parameter< SEXP >::type ds(dsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type z(zSEXP);
    Rcpp::traits::input_parameter< SEXP >::type su(suSEXP);
    Rcpp::traits::input_parameter< SEXP >::type dsu(dsuSEXP);
    Rcpp::traits::input_parameter< SEXP >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< SEXP >::type dthreshold(dthresholdSEXP);
    Rcpp::traits::input_parameter< bool >::type Score(ScoreSEXP);
    rcpp_result_gen = Rcpp::wrap(loglikMVN(Yl, yu, status, Mu, dmu, S, ds, z, su, dsu, threshold, dthreshold, Score));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP mets_loglikMVN(SEXP YlSEXP, SEXP yuSEXP, SEXP statusSEXP, SEXP MuSEXP, SEXP dmuSEXP, SEXP SSEXP, SEXP dsSEXP, SEXP zSEXP, SEXP suSEXP, SEXP dsuSEXP, SEXP thresholdSEXP, SEXP dthresholdSEXP, SEXP ScoreSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(mets_loglikMVN_try(YlSEXP, yuSEXP, statusSEXP, MuSEXP, dmuSEXP, SSEXP, dsSEXP, zSEXP, suSEXP, dsuSEXP, thresholdSEXP, dthresholdSEXP, ScoreSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int mets_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("arma::mat(*.loglikMVN)(arma::mat,SEXP,SEXP,arma::mat,SEXP,arma::mat,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,bool)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP mets_RcppExport_registerCCallable() { 
    R_RegisterCCallable("mets", "mets_.loglikMVN", (DL_FUNC)mets_loglikMVN_try);
    R_RegisterCCallable("mets", "mets_RcppExport_validate", (DL_FUNC)mets_RcppExport_validate);
    return R_NilValue;
}
