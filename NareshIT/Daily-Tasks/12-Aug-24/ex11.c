/*
Question: Write a c program to swap the first and last digit 
of the given 4digit number with out using loops or control 
flow statements
Note:: read the n value from the user through the scanf
sample input: n=7865
sample output: 5867.
*/

#include<stdio.h>
void main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    printf("\nReverse of %d is %d%d%d", n, n%10, n/10%100, n/10/100);
}


/*
Enter a number: 7865
Reverse of 7865 is 5867

Enter a number: 1234
Reverse of 1234 is 4231
*/