/*
Write a C program to perform 2D array multiplication and
display it.
*/

#include<stdio.h>
void main()
{
    int a[10][10], b[10][10], result[10][10];
    int nr, nc, i, j, k;
    printf("\nEnter number of rows & columns for two matrix: ");
    scanf("%d %d", &nr, &nc);

    printf("\nEnter %d elements in first matrix: ", nc*nr);
    for(i=0; i<nr; i++)
    {
        for(j=0; j<nc; j++)
        {
            printf("\nelement - [%d],[%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter %d elements in second matrix: ", nc*nr);
    for(i=0; i<nr; i++)
    {
        for(j=0; j<nc; j++)
        {
            printf("\nelement - [%d],[%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nFirst Matrix is: \n");
    for(i=0; i<nr; i++)
    {
        for(j=0; j<nc; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nSecond Matrix is: \n");
    for(i=0; i<nr; i++)
    {
        for(j=0; j<nc; j++)
        {
            printf("%4d", b[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<nr; i++)
    {
        for(j=0; j<nc; j++)
        {
            result[i][j] = 0;
        }
    }

    //Multiplication
    for(i=0; i<nr; i++)
    {
        for(j=0; j<nc; j++)
        {
            for(k=0; k<nc; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nAfter Multiplication matrix is: \n");
    for(i=0; i<nr; i++)
    {
        for(j=0; j<nc; j++)
        {
            printf("%4d", result[i][j]);
        }
        printf("\n");
    }
}

/*
Enter number of rows & columns for two matrix: 2
2

Enter 4 elements in first matrix: 
element - [0],[0]: 1

element - [0],[1]: 2

element - [1],[0]: 3

element - [1],[1]: 4

Enter 4 elements in second matrix: 
element - [0],[0]: 5

element - [0],[1]: 6

element - [1],[0]: 7

element - [1],[1]: 8

First Matrix is: 
   1   2
   3   4

Second Matrix is: 
   5   6
   7   8

After Multiplication matrix is: 
  19  22
  43  50
*/