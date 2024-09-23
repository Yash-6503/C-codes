/*
Function with Return type i.e Here, the function will
be declared along with the int/float/char or any datatype
and it will return a value to it.
*/

#include<stdio.h>
void main()             //Function caller
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    printf("\nSquare of %d is : %d", n, square(n));     //function call within another function
}

int square(int n)   //Function takes paramater as n
{
    return n*n;     //it returns the square of number 
}

/*
Enter a number: 5

Square of 5 is : 25
*/