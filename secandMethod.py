import  math

def f(x):
    return pow(x,3)-2*math.sin(x)

def secantMethod(f,x0,x1,maxIteration,tolerance):
    x2=0
    f0=f(x0)
    f1=f(x1)
    i=2
    while i<=maxIteration :
        x2=x1-(f1*(x1-x0))/(f1-f0)
        print(x2)
        if abs(x2-x1)<tolerance:
            return x2
        x0=x1
        x1=x2
        f0=f1
        f1=f(x2)
        i+=1
    print("Maximum number of iterations reached")
    return x2

root=secantMethod(f,.5,1,100,.0001)
print(f"approximate root={root}")
