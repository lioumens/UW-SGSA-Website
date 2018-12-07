#include <Rcpp.h>

// [[Rcpp::export]]
int addUp_Cpp(int n){
  int start=0;
  for (int i=1;i<=n;i++){
    start=start+i;
  }
  return start;
}