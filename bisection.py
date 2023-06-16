def find_initial_value(f,start,end,step):
    a=None
    b=None
    x=start
    while x<=end :
        if f(x)<0:
            a=x
        if f(x)>0:
            b=x
        x+=step
    
    return a,b 


def bisection(f,a,b,tolerence):
    
    if f(a)*f(b)>=0:
        raise ValueError("the fuction must change sign over the interval")
    
    while (b-a)/2 > tolerence:
        c=(a+b)/2
        print(c)
        if f(c)==0:
            return c
        elif f(a)*f(c)<0:
            b=c
        else:
            a=c
    return c


def f(x):
    return x**3+x-1 

a,b=find_initial_value(f,-1,1,0.1)
#print("a=%s b=%s "%(a,b))
print(f"a={a} b={b}")
root=bisection(f,a,b,.00001)
print("Approximate root:", root)







    
