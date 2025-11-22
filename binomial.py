import numpy as np

MAX_N = 66
C = np.fromfile("binomial.bin", dtype=np.uint64).reshape((MAX_N+1, MAX_N+1))
print(C[5,2])  # 10
