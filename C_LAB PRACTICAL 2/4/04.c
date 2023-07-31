 #include <stdio.h>
 int main()
 {
 float fahrenheit, celsius;
 printf("Enter The Temperature In Fahrenheit: ");
 scanf("%f", &fahrenheit);
 celsius = (5.0 / 9.0) * (fahrenheit - 32);
 printf("\n\nThe Temperature In Celsius Is %.2f Degrees", celsius);
}
