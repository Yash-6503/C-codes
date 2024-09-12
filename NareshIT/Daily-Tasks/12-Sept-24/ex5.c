/*
5.
Write a program in C to print or display an upper triangular matrix.
-------
Sample input :
Input the size of the square matrix : 3
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [0],[2] : 3
element - [1],[0] : 4
element - [1],[1] : 5
element - [1],[2] : 6
element - [2],[0] : 7
element - [2],[1] : 8
element - [2],[2] : 9

Sample output :
The matrix is :
1 2 3
4 5 6
7 8 9

Setting zero in upper triangular matrix
1 0 0
4 5 0
7 8 9
*/

#include<stdio.h>
void main()
{
    int a[10][10], i, j, n;
    printf("\nEnter array size: ");
    scanf("%d", &n);
    printf("\nInput %d elements in the matrix: ", n*n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("\nelement - [%d],[%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe Matrix is: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nSetting zero in upper triangular matrix: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i < j){
                a[i][j] = 0;
            }
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}

/*
Enter array size: 3

Input 9 elements in the matrix: 
element - [0],[0]: 1

element - [0],[1]: 2

element - [0],[2]: 3

element - [1],[0]: 4

element - [1],[1]: 5

element - [1],[2]: 6

element - [2],[0]: 7

element - [2],[1]: 8

element - [2],[2]: 9

The Matrix is: 
   1   2   3
   4   5   6
   7   8   9

Setting zero in upper triangular matrix: 
   1   0   0
   4   5   0
   7   8   9
*/