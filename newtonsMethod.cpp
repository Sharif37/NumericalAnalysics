#include<bits/stdc++.h>
using namespace std ;

double fun(double x)
{
    return pow(x,2)-2;
}

double dfun(double x)
{
    return 2*x;
}

int main()
{

int t=0 ;
double x_0=1,x ;
double precision=.0001 ;
x=x_0 -(fun(x_0)/dfun(x_0));
while((x-x_0)>precision)
{
    x=x -(fun(x)/dfun(x));

 cout<<x<<" "<<endl ;
 t++ ;
 if(t==10)break ;

}




}
