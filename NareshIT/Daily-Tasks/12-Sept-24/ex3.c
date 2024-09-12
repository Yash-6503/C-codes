/*
3.
Write a program in C to find the sum of rows and columns of a matrix.
--------
Sample input :
Input the size of the square matrix : 2
Input elements in the first matrix :
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8

Sample Output :
The matrix is :
5 6
7 8
The sum or rows and columns of the matrix is :
5   6 11
7   8 15
12 14
*/

#include<stdio.h>
void main()
{
    int a[10][10], nr, i, j, rs, cs;
    printf("\nEnter number of rows: ");
    scanf("%d", &nr);
    printf("\nInput %d elements: ", nr*nr);
    for(i=0; i<nr; i++)
    {
        for(j=0; j<nr; j++)
        {
            printf("\nelement - [%d],[%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe Matrix is: \n");
    for(i=0; i<nr; i++)
    {
        for(j=0; j<nr; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<nr; i++)
    {
        for(rs=cs=j=0; j<nr; j++)
        {
            rs += a[i][j];
            cs += a[j][i];
        }
        a[i][j] = rs;
        a[j][i] = cs;
    }

    printf("\nThe sum or rows and columns of the matrix is : \n");
    for(i=0; i<=nr; i++)
    {
        for(j=0; j<=nr; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}

/*
Enter number of rows: 2

Input 4 elements: 
element - [0],[0]: 5

element - [0],[1]: 6

element - [1],[0]: 7

element - [1],[1]: 8

The Matrix is: 
   5   6
   7   8

The sum or rows and columns of the matrix is : 
   5   6  11
   7   8  15
  12  14   
*/

/*
Enter number of rows: 2

Input 4 elements: 
element - [0],[0]: 1

element - [0],[1]: 2

element - [1],[0]: 3

element - [1],[1]: 4

The Matrix is: 
   1   2
   3   4

The sum or rows and columns of the matrix is : 
   1   2   3
   3   4   7
   4   6   
*/

