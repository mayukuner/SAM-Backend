#ifndef GRPLASSO_H
#define GRPLASSO_H

#include "../../utils.h"

extern "C" void grplasso(double *yy, double *XX, double *lambda, int *nnlambda, int *nn, int *dd, int *pp, double *ww, int *mmax_ite, double *tthol, char** regfunc, int *iinput, int *df, double *sse, double *func_norm);


#endif
