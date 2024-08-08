// Read two numbers and perform all arithmetic operations [ +, -, *, %, / ].

#include<stdio.h>
void main()
{
    int a, b;
    printf("\nEnter 2 numbers: ");
    scanf("%d%d", &a, &b);
    printf("\nAddition of %d and %d is %d", a, b, a+b);
    printf("\nSubstract of %d and %d is %d", a, b, a-b);
    printf("\nMultiply of %d and %d is %d", a, b, a*b);
    printf("\nDivision of %d and %d is %.2f", a, b, (float) a/b);
    printf("\nModulus of %d and %d is %d", a, b,a % b);
}

/* output
Enter 2 numbers: 5
2

Addition of 5 and 2 is 7
Substract of 5 and 2 is 3
Multiply of 5 and 2 is 10
Division of 5 and 2 is 2.50
Modulus of 5 and 2 is 1

Enter 2 numbers: 10
2

Addition of 10 and 2 is 12
Substract of 10 and 2 is 8
Multiply of 10 and 2 is 20
Division of 10 and 2 is 5.00
Modulus of 10 and 2 is 0
*/