/*
2.
Write a program in C to find the sum of the left diagonals of a matrix.
--------
Sample input :
Input the size of the square matrix : 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4

Sample output :
The matrix is :
1 2
3 4
Addition of the left Diagonal elements is :5
*/

#include<stdio.h>
void main()
{
    int a[10][10], i, j, n, sum=0;
    printf("\nEnter array size: ");
    scanf("%d", &n);
    printf("\nInput %d elements in the matrix: ", n*n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("\nelement - [%d],[%d]: ", i, j);
            scanf("%d", &a[i][j]);
            if(i == j){
                sum += a[i][j];
            }
        }
    }

    printf("\nMatrix is: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nAddition of the right Diagonal elements is : %d", sum);
}


/*
Enter array size: 2

Input 4 elements in the matrix: 
element - [0],[0]: 1

element - [0],[1]: 2

element - [1],[0]: 3

element - [1],[1]: 4

Matrix is: 
   1   2
   3   4

Addition of the right Diagonal elements is : 5
*/

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

Matrix is: 
   1   2   3
   4   5   6
   7   8   9

Addition of the right Diagonal elements is : 15
*/