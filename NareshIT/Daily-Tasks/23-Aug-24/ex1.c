/*
1.
Write a C program that asks the user to input a three-digit 
integer and calculates the sum of its digits. Using While loop.

Input as : 
Enter a three digit number : 123

Output as :
Sum of the digits : 6
*/

#include<stdio.h>
void main()
{
    int n, r, sum=0;
    printf("\nEnter 3 digit number: ");
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        sum+=r;
        n=n/10;
    }
    printf("\nSum of digitd : %d", sum);
}

/*
Enter 3 digit number: 123
Sum of digitd : 6

Enter 3 digit number: 456
Sum of digitd : 15

Enter 3 digit number: -123
Sum of digitd : -6
*/