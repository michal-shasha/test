#include "NumClass.h"
int sum1=0;
int sum2=1;



int isStrong(int a)
{
    int b=a;
    while(a!=0)
    {
    int x=a%10;
    for(int i=x; x>0; x--)
     {
       sum2=sum2*x;
     }
    sum1+=sum2;
    sum2=1;
    a=a/10;   
    }
    if(sum1==b) 
      return 1;
    return 0;
}

int isPrime(int a)
{
    for(int i=2; i<a; i++)
    {
        if(a%i ==0)
         return 0;
    }
    return 1;
}