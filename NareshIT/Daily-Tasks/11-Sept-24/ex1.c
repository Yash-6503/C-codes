/*
Que 1 : Write a program in C for a 2D array of size 3x3 
and print the matrix.
--------
Sample input :
Input elements in the matrix :
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
*/

#include<stdio.h>
void main()
{
    int a[10][10], n, i, j;
    printf("\nEnter row & col size of n*n matrix: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n*n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe Matrix is: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }    
}

/*
Enter row & col size of n*n matrix: 3

Enter 9 elements: 
1 2 3
4 5 6
7 8 9

The Matrix is: 
  1  2  3
  4  5  6
  7  8  9
*/