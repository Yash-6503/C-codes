/*
3.Create a program that takes the principal amount, interest rate, and time in years from the user and 
calculates the simple interest. Print the result with appropriate messages.

Sample Input
principal amount: 4000
interest rate (in percentage): 5
time in years: 3

Sample Output
Simple Interest is: 600.00
*/

#include<stdio.h>
void main()
{
    int time, principal;
    float rate, si;
    printf("\nEnter a principal amount: ");
    scanf("%d", &principal);
    printf("\nEnter rate of interest: ");
    scanf("%f", &rate);
    printf("\nEnter time in years: ");
    scanf("%d", &time);
    si = (principal / 100) * rate * time;
    printf("\nSimple Interest is %.2f", si);
}

/* output
Enter a principal amount: 4000
Enter rate of interest: 5
Enter time in years: 3
Simple Interest is 600.00

Enter a principal amount: 10000
Enter rate of interest: 10
Enter time in years: 2
Simple Interest is 2000.00
*/