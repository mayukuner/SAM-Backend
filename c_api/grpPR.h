#ifndef GRPPR_H
#define GRPPR_H

#include "../../utils.h"

extern "C" void grpPR(double *A, double* yy, double *lambda, int *nnlambda, double *LL0, int *nn, int *dd, int *pp, double *xx, double *aa0, int *mmax_ite, double *tthol, char** regfunc, double *aalpha, double *z, int *df, double *func_norm);


#endif
