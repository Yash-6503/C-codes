/*
3.
Write a C program to add all the natural number from 1 to n. Ask 
the user to give n value and print the addition value.

Input as : 
Enter n value : 10

Output as :
Sum of the natural number from 1 to 10 : 55
*/

#include<stdio.h>
void main()
{
    int n, sum=0, i=1;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    printf("\nSum of N natural numbers is: %d", sum);
}

/*
Enter a number: 4
Sum of N natural numbers is: 10

Enter a number: 10
Sum of N natural numbers is: 55


*/