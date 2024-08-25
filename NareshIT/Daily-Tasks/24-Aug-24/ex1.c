/*
1.
Write a C program that prompts the user to enter a number and then prints the
 multiplication table for that number using a while loop.
*/

#include<stdio.h>
void main()
{
    int n, i=1;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    while(i!=11)
    {
        printf("\n%d * %d = %d", n, i, n*i);
        i++;
    }
}

/*
Enter a number: 5

5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50
*/