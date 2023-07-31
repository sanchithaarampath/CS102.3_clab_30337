#include <stdio.h>
#include <stdlib.h>

// This program was written to find how to seperate digits of a number without taking the input as an array
// 4.2.c is the correct file with the program for the 4th Q.

int main()
{
    int number, digit;
  
    printf("Enter a number: ");
    scanf("%d", &number);
  
    printf("Digits: ");
  
    // Separate and print the individual digits
    while (number > 0) 
    {
        digit = number % 10;  // Extract the last digit
        printf("%d ", digit);
        number /= 10;        // Remove the last digit
    }
  
    return 0;
}
