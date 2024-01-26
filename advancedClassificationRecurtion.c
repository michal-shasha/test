#include "NumClass.h"

int isPalindrome(int num) 
{
    if (num < 10) {
        return 1;
    }
    int lastDigit = num % 10;
    int firstDigit = 0;
    int temp = num;

    while (temp >= 10) {
        temp /= 10;
    }
    firstDigit = temp;

    if (firstDigit != lastDigit) {
        return 0;
    }

    int power = 1;
    while (num / power >= 10) {
        power *= 10;
    }

    return isPalindrome((num % power) / 10);
}




    int countDigits(int num) 
    {
    if (num == 0) 
        return 0;
    else 
        return 1 + countDigits(num / 10);
    }

    int pow(int digit, int num)
    {
        int sum=1;
        for(int i=0; i<num; i++)
        {
            sum=sum*digit;

        }
    
    }

  int isArmstrongRecursive(int num, int n) 
  {
    if (num == 0) 
    {
        return 0;
    } else 
    {
        int digit = num % 10;
        return pow(digit, n) + isArmstrongRecursive(num / 10, n);
    }
  }

int isArmstrong(int num) {
    int n = countDigits(num); 
    int sum = isArmstrongRecursive(num, n); 
    return (sum == num);
}



