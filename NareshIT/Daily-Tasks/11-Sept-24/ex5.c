/*
Que 5 : Write a program in C to find the transpose of a given matrix.
-------
Sample input :
Input the rows and columns of the matrix : 2 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4

Sample output :
The matrix is :
1 2
3 4

The transpose of a matrix is :
1 3
2 4
*/

#include<stdio.h>
void main()
{
    int a[10][10];
    int nr, nc, i, j;
    printf("\nEnter number of row & column of first matrix: ");
    scanf("%d %d", &nr, &nc);

    printf("\nEnter %d elements of first matrix: ", nr*nc);
    for(i=0; i<nr; i++)
    {
        for(j=0; j<nc; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe Matrix is: \n");
    for(i=0; i<nr; i++)
    {
        for(j=0; j<nc; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nThe Transpose Matrix is: \n");
    for(i=0; i<nc; i++)
    {
        for(j=0; j<nr; j++)
        {
            printf("%3d", a[j][i]);
        }
        printf("\n");
    }    
}

/*
Enter number of row & column of first matrix: 2 2

Enter 4 elements of first matrix: 1
2
3
4

The Matrix is: 
  1  2
  3  4

The Transpose Matrix is: 
  1  3
  2  4
*/