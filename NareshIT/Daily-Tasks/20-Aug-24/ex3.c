/*
3.
Write a C program to find the maximum between two 
numbers using Switch statement.
*/

#include<stdio.h>
void main()
{
    int a, b;
    printf("\nEnter a & b value: ");
    scanf("%d %d", &a, &b);
    switch(a>b)
    {
        case 1:
            printf("\na[%d] is Big", a);
            break;
        
        default:
            printf("\nb[%d] is Big", b);

    }
}

/*
Enter a & b value: 20
10
a[20] is Big

Enter a & b value: 20
40
b[40] is Big
*/