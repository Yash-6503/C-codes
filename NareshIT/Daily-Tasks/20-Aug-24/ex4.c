/*
4.
Write a C program to check the number is even or odd by using 
Switch Case.
*/

#include<stdio.h>
void main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    switch(n%2)
    {
        case 1:
            printf("\nOdd");
            break;
        
        default: 
            printf("\nEven");
    }
}

/*
Enter a number: 2
Even

Enter a number: 10
Even

Enter a number: 11
Odd

Enter a number: 99
Odd
*/