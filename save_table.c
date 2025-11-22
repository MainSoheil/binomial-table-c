#include "binomial.h"
#include <stdio.h>

int main() {
    printf("Calculating binomial coefficients...\n");
    createBinomial();
    printf("Saving to file binomial.bin...\n");
    saveBinomial("binomial.bin");
    printf("File saved successfully!\n");
    return 0;
}
