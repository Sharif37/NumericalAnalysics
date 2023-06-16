//Bismillah
#include<bits/stdc++.h>
using namespace std ;
int main()
{
 int bit[32] ;
 float  p ;
 cin>>p ;

int  t=*(int *)&p;

printf(" Hexadecimal from of floating point %f is %x \n\n",p ,t) ;

printf("binary from of floating point %f is : ",p) ;
for(int i=0 ;i<32 ;i++) {
        bit[i]=(t&1) ;
    t= t>>1 ;

}
for(int i=31;i>=0 ;i--)
{
    cout<<bit[i] ;
}
cout<<"\n\n" ;

}

