#' C++ Version for ordering a matrix or an vector
#' 
#' @param x a \code{matrix} or \code{vector}
#' @param desc Desceding or ascending ordering
#' @param k returns k first elements (default k = 0: all elements)
#' 
#' @export
orderCPP <- function(x, desc=T, k=0) {
  sortDirection <- ifelse(desc, 0, 1)
  if (is(x, "matrix")) {
    if (k > nrow(x))
      k <- 0
    orderMatrixCPP(x, sortDirection, k)
  } else if (is(x, "vector")) {
    if (k > length(x))
      k <- 0
    orderVectorCPP(x, sortDirection, k)
  }
}
