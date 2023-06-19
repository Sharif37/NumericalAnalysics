import numpy as np
from scipy import linalg

A = np.array([[2, -1, 0],
              [-1, 2, -1],
              [0, -1, 2]])

b=np.array([1,2,3])
x=linalg.solve(A,b)

A_inv=linalg.inv(A)
y=np.dot(A_inv,b)

P, L, U = linalg.lu(A)
y=linalg.solve_triangular(L,P.dot(b),lower=True)
solve=linalg.solve_triangular(U,y)
print(f"solve={solve}")
#print(f"P={P} \n L={L} \n U={U}")
#print(x)
#print(f"A={A}\t\n A^-1={A_inv}")
#print(y)