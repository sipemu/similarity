#' C++ Version for ordering a matrix or an vector
#' 
#' @export
orderCPP(x, desc=T, k=0) {
  sortDirection <- ifelse(desc, 0, 1)
  if (is(x, "matrix")) {
    orderMatrixCPP(x, sortDirection, k)
  } else if (is(x, "vector")) {
    orderVectorCPP(x, sortDirection, k)
  }
}
