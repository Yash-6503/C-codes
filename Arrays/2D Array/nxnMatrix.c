/*
Write a C program to read and display the n*n matrix.
*/

#include<stdio.h>
void main()
{
    int a[10][10], i, j, nc, nr;
    printf("\nEnter number of rows & columns: ");
    scanf("%d %d", &nr, &nc);
    printf("\nEnter %d elements: ", nr*nc);
    for(i=0; i<nr; i++)
    {
        for(j=0; j<nc; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nn * n Matrix is: \n");
    for(i=0; i<nr; i++)
    {
        for(j=0; j<nc; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
}

/*
Enter number of rows & columns: 3
3

Enter 9 elements: 1 2 3
4 5 6
7 8 9

n * n Matrix is: 
  1  2  3
  4  5  6
  7  8  9
*/

/*
Enter number of rows & columns: 4 
5

Enter 20 elements: 1 2 3 4 5
5 4 3 2 1
1 2 3 4 5
5 4 3 2 1

n * n Matrix is: 
  1  2  3  4  5
  5  4  3  2  1
  1  2  3  4  5
  5  4  3  2  1
*/