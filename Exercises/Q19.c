//Practice of all Pyramid examples

#include<stdio.h>
int main()
{
    int i, j;
    printf("\nSquare Pattern\n");
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\nTriangle Pattern\n");
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    printf("\nReverse Triangle Pattern\n");
    for(i = 5; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\nNumbers Triangle Pattern\n");
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    
    printf("\nReverse Numbers Pattern\n");
    for(i = 5; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }


    
    printf("\nAlphabets Triangle Pattern\n");
    for(char a = 'A'; a <= 'E'; a++)
    {
        for(char b = 'A'; b <= a; b++)
        {
            printf("%c ",a);
        }
        printf("\n");
    }
    return 0;
}