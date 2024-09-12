/*
Write a C program to add 2 matrix using 2D array and 
display it.
*/

#include<stdio.h>
void main()
{
    int a[10][10], b[10][10], result[10][10];
    int nr, nc, i, j;
    printf("\nEnter number of rows & columns of two matrix: ");
    scanf("%d %d", &nr, &nc);

    if(nr == nc)
    {   
        printf("\nEnter %d elements in the first matrix: ", nr*nc);
        for(i=0; i<nr; i++)
        {
            for(j=0; j<nc; j++)
            {
                printf("\nelement - [%d],[%d]: ", i, j);
                scanf("%d", &a[i][j]);
            }
        }

        printf("\nEnter %d elements in the second matrix: ", nr*nc);
        for(i=0; i<nr; i++)
        {
            for(j=0; j<nc; j++)
            {
                printf("\nelement - [%d],[%d]: ", i, j);
                scanf("%d", &b[i][j]);
            }
        }

        printf("\nFirst matrix is: \n");
        for(i=0; i<nr; i++)
        {
            for(j=0; j<nc; j++)
            {
                printf("%4d", a[i][j]);
            }
            printf("\n");
        }

        printf("\nSecond matrix is: \n");
        for(i=0; i<nr; i++)
        {
            for(j=0; j<nc; j++)
            {
                printf("%4d", b[i][j]);
            }
            printf("\n");
        }

        //Addition
        for(i=0; i<nr; i++)
        {
            for(j=0; j<nc; j++)
            {
                result[i][j] = a[i][j] + b[i][j];
            }
        }

        printf("\nAfter Addition matrix is: \n");
        for(i=0; i<nr; i++)
        {
            for(j=0; j<nc; j++)
            {
                printf("%4d", result[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("\nPlease enter same rows and columns of matrix");
    }
}

/*
Enter number of rows & columns of two matrix: 2 3

Please enter same rows and columns of matrix
*/

/*
Enter number of rows & columns of two matrix: 2 2

Enter 4 elements in the first matrix: 
element - [0],[0]: 1

element - [0],[1]: 2

element - [1],[0]: 3

element - [1],[1]: 4

Enter 4 elements in the second matrix: 
element - [0],[0]: 5

element - [0],[1]: 6

element - [1],[0]: 7

element - [1],[1]: 8

First matrix is: 
   1   2
   3   4

Second matrix is: 
   5   6
   7   8

After Addition matrix is: 
   6   8
  10  12
*/