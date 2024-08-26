/*
5.
Write a C program to check if a given number is a strong number. A strong number 
is a positive integer in which the sum of the factorial of its digits is equal to 
the number itself. For example, 145 is a strong number since 1! + 4! + 5! = 145.
The program should prompt the user to enter a positive integer and determine whether
 it is a strong number or not.

Input as:
Enter a number : 145 

Output as:
145 is a strong number.
*/

#include<stdio.h>
void main()
{
    int n, fact, sum=0, r, i, m;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    for(m=n; m!=0; m=m/10)
    {
        for(r=m%10, fact=1; r>1; r--)
        {
            fact*=r;
        }
        sum+=fact;
    }
    if(sum == n)
    {
        printf("\n%d is a Strong number", n);
    }
    else{
        printf("\n%d is not a Strong number", n);
    }
}

/*
Enter a number: 145
145 is a Strong number

Enter a number: 22
22 is not a Strong number


Enter a number: 150
150 is not a Strong number
*/
