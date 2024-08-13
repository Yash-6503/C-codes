/*
2.
Create a C program that reads two integers from the user and prints 
"Equal" if they are equal, and "Not Equal" otherwise.

Input as :
Enter a number : 10 10

Output as :
Equal
*/

#include<stdio.h>
void main()
{
    int a, b;
    printf("\nEnter a & b value: ");
    scanf("%d%d", &a, &b);
    if(a==b)
    {
        printf("\nEqual");
    }
    else{
        printf("\nNot Equal");
    }
}


/*
Enter a & b value: 10
10
Equal

Enter a & b value: 10
20
Not Equal
*/