/*
Read two numbers and perform arithmetic operation 
using a menu:
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    float a, b, power, rem;
    char choice;
    printf("\nEnter 2 numbers: ");
    scanf("%f %f", &a, &b);
    printf("\n--------------------------------------");
    printf("\n\t\tM E N U");
    printf("\n--------------------------------------");
    printf("\n+. ADD");
    printf("\n-. SUB");
    printf("\n*. MUL");
    printf("\n%%. MOD");
    printf("\n/. DIV");
    printf("\n^. POW");
    printf("\nE. EXIT");
    printf("\n--------------------------------------");
    printf("\nEnter your Choice [ ]\b\b");
    scanf(" %c", &choice);
    switch(choice)
    {
        case '+' :
                printf("\nSum = %.2f", a+b);
                break;
                
        case '-' :
                printf("\nSum = %.2f", a-b);
                break;
                
        case '*' :
                printf("\nSum = %.2f", a*b);
                break;
                
        case '%' :
                rem = fmod(a,b);
                printf("\nSum = %.2f", rem);
                break;
                
        case '/' :
                printf("\nSum = %.2f", a/b);
                break;
                
        case '^' :
                power = pow(a,b);
                printf("\nSum = %.2f", pow(a,b));
                break;
                
        case 'E' : case 'e':
                exit(0);
                
        default:
                printf("\nInvalid choice");
    }
}

/*
Enter 2 numbers: 2
5

--------------------------------------
                M E N U
--------------------------------------
+. ADD
-. SUB
*. MUL
%. MOD
/. DIV
^. POW
E. EXIT
--------------------------------------
Enter your Choice [^]

Sum = 32.00
*/

/*

Enter 2 numbers: 100
5

--------------------------------------
                M E N U
--------------------------------------
+. ADD
-. SUB
*. MUL
%. MOD
/. DIV
^. POW
E. EXIT
--------------------------------------
Enter your Choice [/]

Sum = 20.00
*/