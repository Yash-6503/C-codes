/*
Function With Parameter i.e here the function it takes 
paramaters from main as argument in calling but it doesn't
returns any thing.
*/

#include<stdio.h>
void main()         //caller
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    cube(n);        //function calling by passing argument to function
}

void cube(int n)        //function defination
{
    printf("\nCube of %d is : %d", n, n*n*n);   //o/p
}

/*
Enter a number: 3
Cube of 3 is : 27

Enter a number: 100
Cube of 100 is : 1000000
*/