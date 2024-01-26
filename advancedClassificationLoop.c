#include "NumClass.h"
int count;


int isPalindrom(int p)
{
    int p2=p;
    while(p!=0)
    {
        count++;
        p=p/10;
    }
    int arr [count];
    for(int i= sizeof(arr)-1; i>=0; i--)
    {
       arr[i]=p2%10;
       p2/10;
    }
       for(int i= 0; i<sizeof(arr)/2; i++)
       {
        if(arr[i] != arr[i+sizeof(arr)])
         return 0;
       }
       return 1;
}


int isArmstrong(int num) 
{
    int sum, count;
    int num2,num1=num;
    while(num!=0)
    {
        count++;
        num=num/10;
    }
    while (num1!=0)
    {
        int x=num1%10;
        int sum2=1;
        for(int i=0;i<count; i++)
        {
            sum2=sum2*x;
        }
        sum+=sum2;
        sum2=1;
    }
    if(num2==sum)
     return 1;
    return 0;

}