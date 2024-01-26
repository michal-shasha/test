#include <stdio.h>
#include "NumClass.h"

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);

    if(x>y)
    {
        for(int i=y; i<=x; i++)
        {
            if(isStrong(i))
             printf("%d is strong number",i);

        }
        printf("\n");
        for(int i=y; i<=x; i++)
        {
             if(isPalindrom(i))
              printf("%d is palindrom number",i);

        }
        printf("\n"); 
        for(int i=y; i<=x; i++)
        {
             if(isPrime(i))
              printf("%d is prime number",i);

        }
        printf("\n"); 
        for(int i=y; i<=x; i++)
        {
             if(isArmstrong(i))
              printf("%d is armstrong number",i);

        }
        printf("\n"); 
    }

    else
    {
        for(int i=x; i<=y; i++)
        {
            if(isStrong(i))
             printf("%d is strong number",i);

        }
        printf("\n");
        for(int i=x; i<=y; i++)
        {
             if(isPalindrom(i))
              printf("%d is palindrom number",i);

        }
        printf("\n"); 
        for(int i=x; i<=y; i++)
        {
             if(isPrime(i))
              printf("%d is prime number",i);

        }
        printf("\n"); 
        for(int i=x; i<=y; i++)
        {
             if(isArmstrong(i))
              printf("%d is armstrong number",i);

        }
        printf("\n"); 

    }

return 0;
}