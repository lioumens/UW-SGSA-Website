#include <RcppEigen.h>
//[[Rcpp::depends(RcppEigen)]]

//[[Rcpp::export]]
Eigen::VectorXd memory(int n){
  Eigen::VectorXd x;
  x.setZero(n);
  for (int i=0; i<n;i++){
    x(i)=1;
  }
  return(x);
}