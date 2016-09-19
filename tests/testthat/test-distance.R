testthat::context("Distance")

testthat::test_that("Euclidian", {
  set.seed((1234))
  x <- matrix(rnorm(100), 10)
  d1 <- distance(x, method = "euclidian")
  d2 <- dist(x, method = "euclidian")
  testthat::expect_equal(as.matrix(d1), as.matrix(d2))
})

testthat::test_that("Manhattan", {
  set.seed((1234))
  x <- matrix(rnorm(100), 10)
  d1 <- distance(x, method = "manhattan")
  d2 <- dist(x, method = "manhattan")
  testthat::expect_equal(as.matrix(d1), as.matrix(d2))
})

testthat::test_that("Minkowski", {
  set.seed((1234))
  x <- matrix(rnorm(100), 10)
  d1 <- distance(x, method = "minkowski", p=3)
  d2 <- dist(x, method = "minkowski", p=3)
  testthat::expect_equal(as.matrix(d1), as.matrix(d2))
})
