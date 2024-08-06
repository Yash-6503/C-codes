/*
Write a C program to convert temperature from Fahrenheit to Celsius.

C = (F - 32) * (5.0 / 9.0)

Input as :

Enter temperature in Fahrenheit: 100

Expected output:

100.00 Fahrenheit is 37.78 Celsius.
*/

#include<stdio.h>
void main()
{
    float Fahrenheit, Celsius;
    printf("\nEnter Fahrenheit: ");
    scanf("%f", &Fahrenheit);
    Celsius = (Fahrenheit - 32) * (5.0/9.0);
    printf("%.2f Fahrenheit is %.2f Celcius.", Fahrenheit, Celsius);
}

/* Output
Enter Fahrenheit: 100
100.00 Fahrenheit is 37.78 Celcius.

Enter Fahrenheit: 200
200.00 Fahrenheit is 93.33 Celcius.
*/