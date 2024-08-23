/*
5.
write a C program to find the factorial of a given number. 
Take the input from the user.

Input as :
Enter a number : 5

Output as :
Factoria of 5 : 120
*/

#include<stdio.h>
void main()
{
    int n, fact=1;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    if(n<0)
    {
        printf("-", n=-n);
    }
    do
    {
        fact*=n;
        n--;
    }while(n);
    printf("%d is Factorial", fact);
}

/*
Enter a number: 4
Factorial is 24

Enter a number: 5
Factorial is 120

Enter a number: 0
Factorial is 1

Enter a number: -4
-24 is Factorial

Enter a number: 0
0 is Factorial
*/