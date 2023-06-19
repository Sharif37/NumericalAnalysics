import numpy as np

B=np.random.rand(4,3)

print(f"B={B}")

B_pinv=np.linalg.pinv(B)
print(f"1.pseudo inverse of B={B_pinv}")

B_pinv2=np.linalg.inv(B.T @ B) @ B.T 

print(f"2.pseudo inverse of B={B_pinv2}")

