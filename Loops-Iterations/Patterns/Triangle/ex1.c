#include<stdio.h>
void main()
{
    int n, i, j;
    printf("\nEnter number of rows: ");
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
Enter number of rows: 5
* 
* * 
* * * 
* * * * 
* * * * * 
*/