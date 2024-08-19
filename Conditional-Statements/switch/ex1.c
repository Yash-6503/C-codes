/*
Find even odd number using switch statements 
*/

#include<stdio.h>
void main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    switch(n%2)
    {
        case 1: printf("\nOdd");
                break;
        default:
                printf("\nEven");
                break;
    }
}

/*
Enter a number: 2
Even
*/

/*
Enter a number: 11
Odd
*/