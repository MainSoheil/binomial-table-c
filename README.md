# Binomial Table C Program

This project is a **C program** that precalculates binomial coefficients (C(n,k)) up to a given `MAX_N` and saves them to a binary file (`binomial.bin`). It also allows you to load the file later for instant access to any C(n,k) without recalculating.

## Features

- Precalculates binomial coefficients using **Pascal's Triangle**
- Saves coefficients to a **binary file** for fast reuse
- Supports `MAX_N` up to 66 safely with `uint64_t`
- Can be read by other programming languages like Python using NumPy
- Very fast: calculates and writes the file in milliseconds

## How to Use

### Compile
```bash
gcc -O3 binomial.c save_table.c -o save_table
gcc -O3 binomial.c load_table.c -o load_table
