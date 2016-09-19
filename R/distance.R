#' Distance calculation
#'
#' @param x a new dataset
#' @param y a second new dataset
#' @param method a distance method (available are: euclidian, manhattan, and minkowski)
#' @param p parameter for Minkowski distance
#' 
#' @return a \code{dist} or \code{matrix} object
#'         
#' @examples
#' \dontrun{
#' require(ranger)
#' rf <- ranger(Species ~ ., data = iris, num.trees = 5, write.forest = TRUE)
#' terminalNodeIdsRanger(iris[, -5], rf)
#' }
#' 
#' @export
distance <- function(x, y=NULL, method="euclidian", p=2) {
  stdDist <- method %in% c("euclidian", "manhattan", "minkowski", "maximum")
  if (stdDist && is.null(y)) {
    d <- distanceCPP(as.matrix(x), method, p) 
    return(asDistObject(d, nrow(x), method))
  } else {
    return(distanceXYCPP(as.matrix(x), as.matrix(y), method, p))
  }
}


#' Weighted Distance calculation
#' 
#' @param x a new dataset
#' @param y a second new dataset
#' @param weights a vector of weights
#' 
#' @return a \code{dist} or \code{matrix} object
#' 
#' @examples
#' \dontrun{
#' require(ranger)
#' rf <- ranger(Species ~ ., data = iris, num.trees = 5, write.forest = TRUE)
#' terminalNodeIdsRanger(iris[, -5], rf)
#' }
#' 
#' @export
wDistance <- function(x, y=NULL, weights=NULL) {
  if (is.null(weights)) {
    weights <- seq(1, ncol(x))
  }
  if (is.null(y)) {
    d <- wDistanceCPP(x, weights) 
    return(asDistObject(d, nrow(x), "weightedDistance"))
  } else {
    return(wDistanceXYCPP(x, y, weights))
  }
}
