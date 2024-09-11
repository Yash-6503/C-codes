/*
Que 2 : Write a program in C for adding two matrices of 
the same size.
--------
Sample input :
Input the size of the square matrix (less than 5): 2
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

The Addition of two matrix is :
6 8
10 12

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
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter %d elements of second matrix: ", nr2*nc2);
    for(i=0; i<nr2; i++)
    {
        for(j=0; j<nc2; j++){
            scanf("%d", &b[i][j]);
        }
    }

    //Addition
    for(i=0; i<nr1; i++)
    {
        for(j=0; j<nc2; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
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

    printf("\nAddition of two Matrix is: \n");
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
Enter number of row & column of first matrix: 2
2

Enter number of row & column of second matrix: 2
2

Enter 4 elements of first matrix: 1
2
3
4

Enter 4 elements of second matrix: 5
6
7
8

The First Matrix is: 
  1  2
  3  4

The Second Matrix is: 
  5  6
  7  8

Addition of two Matrix is: 
  6  8
 10 12
*/

/*
Enter number of row & column of first matrix: 5
5

Enter number of row & column of second matrix: 6
6

Please enter matrix size less than 5
*/