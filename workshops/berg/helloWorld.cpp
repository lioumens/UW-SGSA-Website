#include <Rcpp.h>
// this is a comment

//the export tag below tells Rcpp to make 
//helloWorld() c++ function available in R
//void means "don't return anything"
// [[Rcpp::export]]
void helloWorld(){
  //print out to R console with Rcout (rather than std::cout)
  Rcpp::Rcout<<"Hello world"<<std::endl;
}

  