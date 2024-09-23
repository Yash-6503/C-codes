/*
Function only returns the value without taking any argument 
or any parameters.
*/

#include<stdio.h>
int n;      //global variable

void main()     
{       
    printf("\nEnter number: ");
    scanf("%d", &n);
    printf("\nSquare of %d is : %d", n, square());  //function calling
    printf("\nCube of %d is : %d", n, cube());      //function calling
}

int square()    //function defination
{
    return n*n;     //retuning square value
}

int cube()      //function decelaration
{
    return n*n*n;      //returning cube calue
}

/*
Enter number: 5

Square of 5 is : 25
Cube of 5 is : 125
*/