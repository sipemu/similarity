// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// distanceCPP
arma::vec distanceCPP(arma::mat& x, std::string method, int p);
RcppExport SEXP _Similarity_distanceCPP(SEXP xSEXP, SEXP methodSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(distanceCPP(x, method, p));
    return rcpp_result_gen;
END_RCPP
}
// distanceXYCPP
arma::mat distanceXYCPP(arma::mat& x, arma::mat& y, std::string method, int p);
RcppExport SEXP _Similarity_distanceXYCPP(SEXP xSEXP, SEXP ySEXP, SEXP methodSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(distanceXYCPP(x, y, method, p));
    return rcpp_result_gen;
END_RCPP
}
// wDistanceCPP
arma::vec wDistanceCPP(arma::mat& x, arma::rowvec& weights);
RcppExport SEXP _Similarity_wDistanceCPP(SEXP xSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::rowvec& >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(wDistanceCPP(x, weights));
    return rcpp_result_gen;
END_RCPP
}
// wDistanceXYCPP
arma::mat wDistanceXYCPP(arma::mat& x, arma::mat& y, arma::rowvec& weights);
RcppExport SEXP _Similarity_wDistanceXYCPP(SEXP xSEXP, SEXP ySEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::rowvec& >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(wDistanceXYCPP(x, y, weights));
    return rcpp_result_gen;
END_RCPP
}
// terminalNodeDistanceCPP
Rcpp::DataFrame terminalNodeDistanceCPP(arma::umat& terminalNodeIDs);
RcppExport SEXP _Similarity_terminalNodeDistanceCPP(SEXP terminalNodeIDsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::umat& >::type terminalNodeIDs(terminalNodeIDsSEXP);
    rcpp_result_gen = Rcpp::wrap(terminalNodeDistanceCPP(terminalNodeIDs));
    return rcpp_result_gen;
END_RCPP
}
// proximityMatrixRangerCPP
arma::vec proximityMatrixRangerCPP(arma::mat& nodeIDs);
RcppExport SEXP _Similarity_proximityMatrixRangerCPP(SEXP nodeIDsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type nodeIDs(nodeIDsSEXP);
    rcpp_result_gen = Rcpp::wrap(proximityMatrixRangerCPP(nodeIDs));
    return rcpp_result_gen;
END_RCPP
}
// proximityMatrixRangerCPPNM
arma::mat proximityMatrixRangerCPPNM(arma::mat& xNodeIDs, arma::mat& yNodeIDs);
RcppExport SEXP _Similarity_proximityMatrixRangerCPPNM(SEXP xNodeIDsSEXP, SEXP yNodeIDsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type xNodeIDs(xNodeIDsSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type yNodeIDs(yNodeIDsSEXP);
    rcpp_result_gen = Rcpp::wrap(proximityMatrixRangerCPPNM(xNodeIDs, yNodeIDs));
    return rcpp_result_gen;
END_RCPP
}
// depthMatrixRangerCPP
arma::vec depthMatrixRangerCPP(arma::mat& xNodeIDs, arma::umat& terminalNodeIDs);
RcppExport SEXP _Similarity_depthMatrixRangerCPP(SEXP xNodeIDsSEXP, SEXP terminalNodeIDsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type xNodeIDs(xNodeIDsSEXP);
    Rcpp::traits::input_parameter< arma::umat& >::type terminalNodeIDs(terminalNodeIDsSEXP);
    rcpp_result_gen = Rcpp::wrap(depthMatrixRangerCPP(xNodeIDs, terminalNodeIDs));
    return rcpp_result_gen;
END_RCPP
}
// depthMatrixRangerCPPXY
arma::mat depthMatrixRangerCPPXY(arma::mat& xNodeIDs, arma::mat& yNodeIDs, arma::umat& terminalNodeIDs);
RcppExport SEXP _Similarity_depthMatrixRangerCPPXY(SEXP xNodeIDsSEXP, SEXP yNodeIDsSEXP, SEXP terminalNodeIDsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type xNodeIDs(xNodeIDsSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type yNodeIDs(yNodeIDsSEXP);
    Rcpp::traits::input_parameter< arma::umat& >::type terminalNodeIDs(terminalNodeIDsSEXP);
    rcpp_result_gen = Rcpp::wrap(depthMatrixRangerCPPXY(xNodeIDs, yNodeIDs, terminalNodeIDs));
    return rcpp_result_gen;
END_RCPP
}
// weighted_knn
Rcpp::List weighted_knn(arma::mat x, arma::mat query, arma::vec weights, const char sortDirection, const std::size_t k);
RcppExport SEXP _Similarity_weighted_knn(SEXP xSEXP, SEXP querySEXP, SEXP weightsSEXP, SEXP sortDirectionSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type query(querySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const char >::type sortDirection(sortDirectionSEXP);
    Rcpp::traits::input_parameter< const std::size_t >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(weighted_knn(x, query, weights, sortDirection, k));
    return rcpp_result_gen;
END_RCPP
}
// orderMatrixCPP
arma::umat orderMatrixCPP(arma::mat& x, const int sortDirection, int k);
RcppExport SEXP _Similarity_orderMatrixCPP(SEXP xSEXP, SEXP sortDirectionSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int >::type sortDirection(sortDirectionSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(orderMatrixCPP(x, sortDirection, k));
    return rcpp_result_gen;
END_RCPP
}
// orderVectorCPP
arma::uvec orderVectorCPP(arma::vec x, const int sortDirection, int k);
RcppExport SEXP _Similarity_orderVectorCPP(SEXP xSEXP, SEXP sortDirectionSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int >::type sortDirection(sortDirectionSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(orderVectorCPP(x, sortDirection, k));
    return rcpp_result_gen;
END_RCPP
}
// terminalNodeIDRanger
arma::vec terminalNodeIDRanger(arma::mat& x, arma::vec& childNodes1, arma::vec& childNodes2, arma::vec& splitValues, arma::vec& splitVarIds);
RcppExport SEXP _Similarity_terminalNodeIDRanger(SEXP xSEXP, SEXP childNodes1SEXP, SEXP childNodes2SEXP, SEXP splitValuesSEXP, SEXP splitVarIdsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type childNodes1(childNodes1SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type childNodes2(childNodes2SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type splitValues(splitValuesSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type splitVarIds(splitVarIdsSEXP);
    rcpp_result_gen = Rcpp::wrap(terminalNodeIDRanger(x, childNodes1, childNodes2, splitValues, splitVarIds));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Similarity_distanceCPP", (DL_FUNC) &_Similarity_distanceCPP, 3},
    {"_Similarity_distanceXYCPP", (DL_FUNC) &_Similarity_distanceXYCPP, 4},
    {"_Similarity_wDistanceCPP", (DL_FUNC) &_Similarity_wDistanceCPP, 2},
    {"_Similarity_wDistanceXYCPP", (DL_FUNC) &_Similarity_wDistanceXYCPP, 3},
    {"_Similarity_terminalNodeDistanceCPP", (DL_FUNC) &_Similarity_terminalNodeDistanceCPP, 1},
    {"_Similarity_proximityMatrixRangerCPP", (DL_FUNC) &_Similarity_proximityMatrixRangerCPP, 1},
    {"_Similarity_proximityMatrixRangerCPPNM", (DL_FUNC) &_Similarity_proximityMatrixRangerCPPNM, 2},
    {"_Similarity_depthMatrixRangerCPP", (DL_FUNC) &_Similarity_depthMatrixRangerCPP, 2},
    {"_Similarity_depthMatrixRangerCPPXY", (DL_FUNC) &_Similarity_depthMatrixRangerCPPXY, 3},
    {"_Similarity_weighted_knn", (DL_FUNC) &_Similarity_weighted_knn, 5},
    {"_Similarity_orderMatrixCPP", (DL_FUNC) &_Similarity_orderMatrixCPP, 3},
    {"_Similarity_orderVectorCPP", (DL_FUNC) &_Similarity_orderVectorCPP, 3},
    {"_Similarity_terminalNodeIDRanger", (DL_FUNC) &_Similarity_terminalNodeIDRanger, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_Similarity(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
