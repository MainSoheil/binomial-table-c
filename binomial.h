#ifndef BINOMIAL_H
#define BINOMIAL_H

#include <stdint.h>

#define MAX_N 66
extern uint64_t C[MAX_N+1][MAX_N+1];

void createBinomial();
void saveBinomial(const char *filename);
void loadBinomial(const char *filename);

#endif