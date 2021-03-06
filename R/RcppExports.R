# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

distanceCPP <- function(x, method = "euclidian", p = 2L) {
    .Call('_Similarity_distanceCPP', PACKAGE = 'Similarity', x, method, p)
}

distanceXYCPP <- function(x, y, method = "euclidian", p = 2L) {
    .Call('_Similarity_distanceXYCPP', PACKAGE = 'Similarity', x, y, method, p)
}

wDistanceCPP <- function(x, weights) {
    .Call('_Similarity_wDistanceCPP', PACKAGE = 'Similarity', x, weights)
}

wDistanceXYCPP <- function(x, y, weights) {
    .Call('_Similarity_wDistanceXYCPP', PACKAGE = 'Similarity', x, y, weights)
}

terminalNodeDistanceCPP <- function(terminalNodeIDs) {
    .Call('_Similarity_terminalNodeDistanceCPP', PACKAGE = 'Similarity', terminalNodeIDs)
}

proximityMatrixRangerCPP <- function(nodeIDs) {
    .Call('_Similarity_proximityMatrixRangerCPP', PACKAGE = 'Similarity', nodeIDs)
}

proximityMatrixRangerCPPNM <- function(xNodeIDs, yNodeIDs) {
    .Call('_Similarity_proximityMatrixRangerCPPNM', PACKAGE = 'Similarity', xNodeIDs, yNodeIDs)
}

depthMatrixRangerCPP <- function(xNodeIDs, terminalNodeIDs) {
    .Call('_Similarity_depthMatrixRangerCPP', PACKAGE = 'Similarity', xNodeIDs, terminalNodeIDs)
}

depthMatrixRangerCPPXY <- function(xNodeIDs, yNodeIDs, terminalNodeIDs) {
    .Call('_Similarity_depthMatrixRangerCPPXY', PACKAGE = 'Similarity', xNodeIDs, yNodeIDs, terminalNodeIDs)
}

weighted_knn <- function(x, query, weights, sortDirection, k) {
    .Call('_Similarity_weighted_knn', PACKAGE = 'Similarity', x, query, weights, sortDirection, k)
}

orderMatrixCPP <- function(x, sortDirection, k = 5L) {
    .Call('_Similarity_orderMatrixCPP', PACKAGE = 'Similarity', x, sortDirection, k)
}

orderVectorCPP <- function(x, sortDirection, k = 0L) {
    .Call('_Similarity_orderVectorCPP', PACKAGE = 'Similarity', x, sortDirection, k)
}

terminalNodeIDRanger <- function(x, childNodes1, childNodes2, splitValues, splitVarIds) {
    .Call('_Similarity_terminalNodeIDRanger', PACKAGE = 'Similarity', x, childNodes1, childNodes2, splitValues, splitVarIds)
}

