#ifndef RAND_CUSTOM_H
#define RAND_CUSTOM_H

#include "Rcpp.h"
#include "pcg_random.hpp"

void check_pcg_vectors(const Rcpp::IntegerVector&, const Rcpp::IntegerVector&, size_t, const char*); 

pcg32 create_pcg32(const Rcpp::IntegerVector&, const Rcpp::IntegerVector&, size_t);

#endif