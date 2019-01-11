#include <RcppEigen.h>
//[[Rcpp::depends(RcppEigen)]]

//a function to compute x^tAy for vectors x,y
//and a matrix A
//[[Rcpp::export]]
double quadraticForm(Eigen::VectorXd vec1,Eigen::MatrixXd A, Eigen::VectorXd vec2){
  return vec1.adjoint()*A*vec2;
}