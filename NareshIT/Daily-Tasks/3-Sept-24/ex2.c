/*
Que 2 : Write C program to given pattern.
--------

*
*  *
*  *  *
*  *  *  *
*  *  *  *  *
*/

#include<stdio.h>
void main()
{
    int n, i, j;
    printf("\nEnter Number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

/*
Enter Number: 5
* 
* * 
* * * 
* * * * 
* * * * * 
*/