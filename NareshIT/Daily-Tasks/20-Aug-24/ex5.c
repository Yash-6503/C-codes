/*
5.
Write a C program to do a arithmetic operation on two numbers by using Switch Case. 
Take the operators(+,-,*,/,%) as cases and take the input from the user that what kind 
of operation user want to do on two number.

Input as: 
------------
Enter num1 :10
Enter num2 :20
Enter operation : *

O/P as :
---------
Multiplication is :200
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    char choice;
    float a, b;
    printf("\nEnter a & b value: ");
    scanf("%f %f", &a, &b);
    menu:
    printf("\nMathematical Operations");
    printf("\n +");
    printf("\n -");
    printf("\n *");
    printf("\n /");
    printf("\n %%");
    printf("\n E/e");
    printf("\nEnter your Choice: ");
    scanf(" %c", &choice);
    switch(choice)
    {
        case '+':
            printf("\nAddition is %.2f", a+b);
            break;
        case '-':
            printf("\nSubstraction is %.2f", a-b);
            break;
        case '*':
            printf("\nMultiplication is %.2f", a*b);
            break;
        case '/':
            printf("\nDivision is %.2f", a/b);
            break;
        case '%':
            printf("\nModulus is %.2f", fmod(a,b));
            break;
        case 'E': case 'e':
            exit(0);
        default:
            printf("\nInvalid Choice\n");
            goto menu;
    }
}

/*
Enter a & b value: 10
20

Mathematical Operations
 +
 -
 *
 /
 %
 E/e
Enter your Choice: 6

Invalid Choice

Mathematical Operations
 +
 -
 *
 /
 %
 E/e
Enter your Choice: *

Multiplication is 200.00
*/