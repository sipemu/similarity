#' C++ Version for ordering a matrix or an vector
#' 
#' @param x a \code{matrix} or \code{vector}
#' @param decreasing Desceding or ascending ordering
#' @param k returns k first elements (default k = 0: all elements)
#' 
#' @export
orderCPP <- function(x, decreasing=F, k=0) {
  sortDirection <- ifelse(decreasing, "d", "a")
  if (is(x, "matrix")) {
    if (k > nrow(x))
      k <- 0
    orderMatrixCPP(x, sortDirection, k)
  } else if (is(x, "vector")) {
    if (k > length(x))
      k <- 0
    as.vector(orderVectorCPP(x, sortDirection, k))
  }
}
