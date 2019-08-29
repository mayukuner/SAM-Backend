#ifndef GRPSVM_H
#define GRPSVM_H


extern "C" void grpSVM(double *Z, double *lambda, int *nnlambda, double *LL0, int *nn, int *dd, int *pp, double *aa0, double *xx, double *mmu, int *mmax_ite, double *tthol, double *aalpha, double *df, double *func_norm);

#endif
