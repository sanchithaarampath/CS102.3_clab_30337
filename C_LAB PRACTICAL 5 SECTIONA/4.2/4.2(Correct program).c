#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, digit,sum=0;
  
    printf("Enter a number: ");
    scanf("%d", &number);
  
  
    while (number > 0) 
    {
        digit = number % 10;  
        sum = sum + digit;
        number /= 10;        
    }
  
   printf("The sum of your numbers : %d\n",sum );
  
    return 0;
}
