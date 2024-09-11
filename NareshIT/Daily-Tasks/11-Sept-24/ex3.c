/*
Que 3 : Write a program in C for the subtraction of two matrices.
-------
Sample input :
Input the size of the square matrix (less than 5): 2
Input elements in the first matrix :
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8

Input elements in the second matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4

Sample Output :
The First matrix is :
5 6
7 8

The Second matrix is :
1 2
3 4

The Subtraction of two matrix is :
4 4
4 4
*/

#include<stdio.h>
void main()
{
    int a[10][10], b[10][10], result[10][10];
    int nr1, nc1, nr2, nc2, i, j;
    printf("\nEnter number of row & column of first matrix: ");
    scanf("%d %d", &nr1, &nc1);

    printf("\nEnter number of row & column of second matrix: ");
    scanf("%d %d", &nr2, &nc2);

    if((nr1 > 5 && nc1 > 5) || (nr2 > 5 && nc2 > 5))
    {
        printf("\nPlease enter matrix size less than 5");
        return;
    }

    printf("\nEnter %d elements of first matrix: ", nr1*nc1);
    for(i=0; i<nr1; i++)
    {
        for(j=0; j<nc1; j++){
            printf("\nelement - [%d],[%d]: ", i,j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter %d elements of second matrix: ", nr2*nc2);
    for(i=0; i<nr2; i++)
    {
        for(j=0; j<nc2; j++){
            printf("\nelement - [%d],[%d]: ", i,j);
            scanf("%d", &b[i][j]);
        }
    }

    //Addition
    for(i=0; i<nr1; i++)
    {
        for(j=0; j<nc2; j++)
        {
            result[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("\nThe First Matrix is: \n");
    for(i=0; i<nr1; i++)
    {
        for(j=0; j<nc1; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }    

    printf("\nThe Second Matrix is: \n");
    for(i=0; i<nr2; i++)
    {
        for(j=0; j<nc2; j++)
        {
            printf("%3d", b[i][j]);
        }
        printf("\n");
    }    

    printf("\nSubstration of two Matrix is: \n");
    for(i=0; i<nr1; i++)
    {
        for(j=0; j<nc2; j++)
        {
            printf("%3d", result[i][j]);
        }
        printf("\n");
    }    
}

/*
Enter number of row & column of first matrix: 2 2

Enter number of row & column of second matrix: 2 2

Enter 4 elements of first matrix: 
element - [0],[0]: 5

element - [0],[1]: 6

element - [1],[0]: 7

element - [1],[1]: 8

Enter 4 elements of second matrix: 
element - [0],[0]: 1

element - [0],[1]: 2

element - [1],[0]: 3

element - [1],[1]: 4

The First Matrix is: 
  5  6
  7  8

The Second Matrix is: 
  1  2
  3  4

Substration of two Matrix is: 
  4  4
  4  4
*/

/*
Enter number of row & column of first matrix: 6
6

Enter number of row & column of second matrix: 5
5

Please enter matrix size less than 5
*/