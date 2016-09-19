library(testthat)
library(Similarity)

test_that("Goodall 1 Distance", {
  set.seed(123)
  x <- matrix(rnorm(100), 10, 10)
  # + 1 as index starts from 0
  y1 <- test_rank_matrix(x) + 1
  y2 <- apply(x, 2, order)
  expect_equal(y1, y2)
})
