/*
Que 4 : Write a program in C for the multiplication of two square matrices.
-------
Sample input :
Input the rows and columns of first matrix : 2 2
Input the rows and columns of second matrix : 2 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4

Input elements in the second matrix :
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8

Sample output :
The First matrix is :
1 2
3 4

The Second matrix is :
5 6
7 8

The multiplication of two matrix is :
19 22
43 50
*/

#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], r, c, k;
    int m[10][10], nr1, nc1, nr2, nc2;
    printf("\nEnter number of rows & columns of first matrix: ");
    scanf("%d %d", &nr1, &nc1);

    printf("\nEnter number of rows & columns of second matrix: ");
    scanf("%d %d", &nr2, &nc2);

    printf("\nInput %d elements in the first matrix: ", nr1 * nc1);
    for (r = 0; r < nr1; r++)
    {
        for (c = 0; c < nc1; c++)
        {
            printf("\nelement - [%d][%d]: ", r, c);
            scanf("%d", &a[r][c]);
        }
    }

    printf("\nInput %d elements in the second matrix: ", nr2 * nc2);
    for (r = 0; r < nr2; r++)
    {
        for (c = 0; c < nc2; c++)
        {
            printf("\nelement - [%d][%d]: ", r, c);
            scanf("%d", &b[r][c]);
        }
    }

    printf("\nThe First Matrix is: \n");
    for (r = 0; r < nr1; r++)
    {
        for (c = 0; c < nc1; c++)
        {
            printf("%3d", a[r][c]);
        }
        printf("\n");
    }
    printf("\nThe Second Matrix is: \n");
    for (r = 0; r < nr2; r++)
    {
        for (c = 0; c < nc2; c++)
        {
            printf("%3d", b[r][c]);
        }
        printf("\n");
    }

    for (r = 0; r < nr1; r++)
    {
        for (c = 0; c < nc2; c++)
        {
            m[r][c] = 0;
        }
    }

    // Multiply the matrices
    for (r = 0; r < nr1; r++)
    {
        for (c = 0; c < nc2; c++)
        {
            for (k = 0; k < nc1; k++)
            {
                m[r][c] += a[r][k] * b[k][c];
            }
        }
    }

    printf("\nThe Multiplication of two matrix is: \n");
    for (r = 0; r < nr1; r++)
    {
        for (c = 0; c < nc2; c++)
        {
            printf("%d ", m[r][c]);
        }
        printf("\n");
    }
    return 0;
}

/*
Enter number of rows & columns of first matrix: 2 2

Enter number of rows & columns of second matrix: 2 2

Input 4 elements in the first matrix: 
element - [0][0]: 1

element - [0][1]: 2

element - [1][0]: 3

element - [1][1]: 4

Input 4 elements in the second matrix: 
element - [0][0]: 5

element - [0][1]: 6

element - [1][0]: 7

element - [1][1]: 8

The First Matrix is: 
  1  2
  3  4

The Second Matrix is: 
  5  6
  7  8

The Multiplication of two matrix is: 
19 22 
43 50 
*/