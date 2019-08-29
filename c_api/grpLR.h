#ifndef GRPLR_H
#define GRPLR_H

#include "../../utils.h"

extern "C" void grpLR(double *A, double *y, double *lambda, int *nnlambda, double *LL0, int *nn, int *dd, int *pp, double *xx, double *aa0, int *mmax_ite, double *tthol, char** regfunc, double *aalpha, double *z, int *df, double *func_norm);

#endif
