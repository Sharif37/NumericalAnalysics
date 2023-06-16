def g(x):
    return 2.8*x-x*x ;

def fixedpoint(g,x0,maxIteration,tolerance):
    x=x0
    i=1
    while i<=maxIteration :
        x1=g(x)
        print(x)
        if abs(x1-x)<tolerance:
            return x
        x=x1
        i+=1
    print("maximax iteration reached.")
    return x1 

root=fixedpoint(g,.5,100,.0001)   

print(f"approximate root={root}")


