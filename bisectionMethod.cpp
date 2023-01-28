#include<bits/stdc++.h>
using namespace std ;

bool sign(double x)
{
 if(x>0)
 {
     return true ;
 }
 else if(x<0)
 {
     return false  ;
 }
}

double fun(double x)
{
  return pow(x,3)-2*sin(x);
}

int main()
{

   double a=0.5,b=1.5,x=0.0 ;
    double epsilon=.000000005 ;
    int t=0 ;
    while(fabs(b-a)>epsilon)
    {

        t++ ;
           x=(a+b)/2 ;
          cout<<t<<" "<<x<<" " <<endl ;

        if(fun(x)==0.0){
        break ;
        }
        else if(fun(a)*fun(x)<0.0)
        {
            b=x ;
        }
        else
        {
            a=x ;
        }

    }
    cout << "The root is: " << x << endl;
cout<<"*************"<<endl ;

}
