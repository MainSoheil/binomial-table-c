#include "binomial.h"
#include <stdio.h>

int main() {
    loadBinomial("binomial.bin");
    printf("C(5,2) = %llu\n", C[5][2]);
    printf("C(8,3) = %llu\n", C[8][3]);
    printf("C(40,30) = %llu\n", C[40][30]);
    printf("C(55,28) = %llu\n", C[55][28]);
    return 0;
}
