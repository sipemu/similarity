// [[Rcpp::depends(RcppArmadillo)]]
#include<RcppArmadillo.h>

#include "distanceAPI.hpp"

/**
 * Standard distance functions
 */
// [[Rcpp::export]]
arma::vec distanceCPP(arma::mat& x, std::string method="euclidian", int p = 2) {
  distanceAPI dist;
  dist.init(x, method, p);
  return dist.get();
}

// [[Rcpp::export]]
arma::vec distanceXYCPP(arma::mat& x, arma::mat& y, std::string method="euclidian", int p = 2) {
  xyDistanceAPI dist;
  dist.init(x, y, method, p);
  return dist.get();
}

/**
 * Ranger RandomForest related distances
 */
// [[Rcpp::export]]
Rcpp::DataFrame terminalNodeDistanceCPP(arma::umat& terminalNodeIDs) {
  rfTerminalNodeDistanceAPI dist;
  dist.init(terminalNodeIDs);
  return dist.get();
}

// [[Rcpp::export]]
arma::vec proximityMatrixRangerCPP(arma::mat& nodeIDs) {
  rfProximityDistanceAPI dist;
  dist.init(nodeIDs);
  return dist.get();
}

// [[Rcpp::export]]
arma::mat proximityMatrixRangerCPPNM(arma::mat& xNodeIDs, arma::mat& yNodeIDs) {
  rfProximityXYDistanceAPI dist;
  dist.init(xNodeIDs, yNodeIDs);
  return dist.get();
}

// [[Rcpp::export]]
arma::vec depthMatrixRangerCPP(arma::mat& xNodeIDs, arma::umat& terminalNodeIDs) {
  rfDepthDistanceAPI dist;
  dist.init(xNodeIDs, terminalNodeIDs);
  return dist.get();
}

// [[Rcpp::export]]
arma::mat depthMatrixRangerCPPXY(arma::mat& xNodeIDs, arma::mat& yNodeIDs, arma::umat& terminalNodeIDs) {
  rfDepthXYDistanceAPI dist;
  dist.init(xNodeIDs, yNodeIDs, terminalNodeIDs);
  return dist.get();
}
