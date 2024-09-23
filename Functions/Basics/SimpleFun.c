/*
Simple function i.e here no parameters, arguments and 
no return types.
*/

#include<stdio.h>
void hello();       //function decelaration it is optional

void main()         //Here, main() is caller because ity is calling hello function
{
    hello();            //function calling  / This is also called as callie
    printf("\n");
}

void hello()        //function defination
{
    printf("\nHello World!!");
}