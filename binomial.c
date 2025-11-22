#include "binomial.h"
#include <stdio.h>
#include <stdlib.h>

uint64_t C[MAX_N+1][MAX_N+1];

void createBinomial() {
    for (int n = 0; n <= MAX_N; n++) {
        for (int k = 0; k <= n; k++) {
            C[n][k] = (k == 0 || k == n) ? 1 : C[n-1][k-1] + C[n-1][k];
        }
    }
}

void saveBinomial(const char *filename) {
    FILE *f = fopen(filename, "wb");
    if (!f) {
        printf("Cannot open file to save!\n");
        exit(1);
    }
    if (fwrite(C, sizeof(uint64_t), (MAX_N+1)*(MAX_N+1), f) != (MAX_N+1)*(MAX_N+1)) {
        printf("Error writing file!\n");
        fclose(f);
        exit(1);
    }
    fclose(f);
}

void loadBinomial(const char *filename) {
    FILE *f = fopen(filename, "rb");
    if (!f) {
        printf("Cannot open file to load!\n");
        exit(1);
    }
    fread(C, sizeof(uint64_t), (MAX_N+1)*(MAX_N+1), f);
    fclose(f);
}
