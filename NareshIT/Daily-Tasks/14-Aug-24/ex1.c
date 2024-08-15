/*
1.
Write a C program to check whether the given number is negative , 
positive or Zero. Take the input from the user and print appropriate 
statement as per your input. Develop it by using control flow statement.


Case-2
---------

Input as :
Enter the number: -1

Output as :
The number is negative.

Case-2
-------

Input as :
Enter the number: 5

Output as :
The number is positive.
*/

#include<stdio.h>
void main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    if(n>0)
    {
        printf("\nThe number is positive");
    }
    else if(n == 0)
    {
        printf("\nNumber is zero");
    }
    else
    {
        printf("\nThe number is negative");
    }
}


/*
Enter a number: 5
The number is positive

Enter a number: 0
Number is zero

Enter a number: -10
The number is negative
*/