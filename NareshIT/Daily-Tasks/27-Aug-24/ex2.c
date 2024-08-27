/*
2.
Write a C program to display the sum of n terms of even natural numbers.

Sample Input
Test Data :

Input number of terms : 5
Sample Output
Expected Output :

The even numbers are :2 4 6 8 10

The Sum of even Natural Number upto 5 terms : 30
*/

#include<stdio.h>
void main()
{
    int n, sum=0, i;
    printf("\nEnter number: ");
    scanf("%d", &n);
    printf("\nThe even numbers are: ");
    for(i=1; i<=n*2; i++)
    {
        if(i%2==0)
        {
            printf("%d ", i);
            sum += i;
        }
    }
    printf("\nThe Sum of even Natural Number upto %d terms: %d", n, sum);
}

/*
Enter number: 5

The even numbers are: 2 4 6 8 10 
The Sum of even Natural Number upto 5 terms: 30
*/

/*
Enter number: 10

The even numbers are: 2 4 6 8 10 12 14 16 18 20 
The Sum of even Natural Number upto 10 terms: 110
*/