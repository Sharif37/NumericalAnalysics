import numpy as np 
import scipy as sp

from scipy import linalg

A=np.array([[2,3],[1,-2]])
b=np.array([6,1])
x=linalg.solve(A,b)

print(f"x1={x[0]},x2={x[1]}")





