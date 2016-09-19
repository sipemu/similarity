asDistObject <- function(x, n, method) {
  structure(.Data  = x,
            Size   = n,
            Labels = 1:n,
            Diag   = F,
            Upper  = F,
            method = method,
            class  = "dist")
}
