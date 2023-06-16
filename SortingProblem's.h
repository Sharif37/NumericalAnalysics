
Problem Link: https://codeforces.com/problemset/problem/1676/B 

solutions: 
   
   
   
#include<bits/stdc++.h>
using namespace std ;
void Swap(int *a,int *b)
{
    int temp =*a ;
    *a=*b;
    *b=temp ;
}
void sort_Array_using_bubbleSOrt(int arr[], int sizeofArray)
{
    for(int i=0 ; i<sizeofArray; i++)
    {
        for(int j=i ; j<sizeofArray; j++)
        {
            if(arr[i]>arr[j])
            {
                Swap(&arr[i],&arr[j]) ;
            }
        }
    }
}
int main()
{
    int testcase_no ;
    scanf("%d",&testcase_no) ;
    while(testcase_no--)
    {
        int n ;
        scanf("%d",&n) ;
        int arr[n] ;
        for(int i=0 ; i<n ; i++)
        {
            scanf("%d",&arr[i]) ;
        }
        int sizeofArray=n ;
        sort_Array_using_bubbleSOrt(arr,sizeofArray);
       int  minimumCandy=arr[0] ;
       int ans=0 ;
       for(int i=0 ;i<n ;i++)
       {
        ans+=(arr[i]-minimumCandy);
       }
       printf("%d\n",ans) ;

    }
}

