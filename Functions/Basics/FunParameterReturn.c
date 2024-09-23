/*
Function with parameters and return type both.
Here, Function takes arguments and at the end of function 
it returns value.
*/

#include<stdio.h>
void main()
{
    int i, n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    printf("\nSquare of %d is : %d", n, square(n));     //function calling by passing arguments
}

int square(int n)       //Function defination by taking parameters
{
    return n*n;         //Returning square value
}


/*
Enter a number: 5
Square of 5 is : 25
*/