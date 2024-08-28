/*
1.
Write a C program that calculates the sum of a factorial
series up to a given number of terms.
Sample Input
Enter the number of terms in the factorial series: 5
Sample Output
The sum of the factorial series up to 5 terms is: 153
*/

#include<stdio.h>
void main()
{
    int n, i, j;
    long fact, sum=0;
    printf("\nEnter Number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1, fact=1;j<=i; j++)
        {
            fact = fact * j;
        }
        sum = sum + fact;
    }
    printf("\nThe sum of the factorial series up to %d terms is: %ld", n, sum);
}


/*
Enter Number: 5
The sum of the factorial series up to 5 terms is: 153

Enter Number: 4
The sum of the factorial series up to 4 terms is: 33

Enter Number: 10
The sum of the factorial series up to 10 terms is: 4037913
*/