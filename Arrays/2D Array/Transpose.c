/*
Write a program to find Transpose of n*n matrix
*/

#include<stdio.h>
void main()
{
    int a[10][10], nr, nc, sum=0, r, c;
    printf("\nEnter number of rows & columns: ");
    scanf("%d %d", &nr, &nc);
    printf("\nEnter %d elements: ", nr*nc);
    for(r=0; r<nr; r++)
    {
        for(c=0; c<nc; c++)
        {
            scanf("%d", &a[r][c]);
        }
    }

    printf("\nTranspose Matrix is: \n");
    for(c=0; c<nc; c++)
    {
        for(r=0; r<nr; r++)
        {
            printf("%3d", a[r][c]);
        }
        printf("\n");
    }
}

/*
Enter number of rows & columns: 3 3

Enter 9 elements: 
1 2 3
4 5 6
7 8 9

Transpose Matrix is: 
  1  4  7
  2  5  8
  3  6  9
*/

/*
Enter number of rows & columns: 2 3

Enter 6 elements: 
1 2 3
4 5 6

Transpose Matrix is: 
  1  4
  2  5
  3  6
*/