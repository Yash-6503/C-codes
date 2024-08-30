/*
2.
Write C program to given pattern.
--------

5  4  3  2  1
5  4  3  2  1
5  4  3  2  1
5  4  3  2  1
5  4  3  2  1
*/

#include<stdio.h>
void main()
{
    int nc, nr, i, j;
    printf("\nEnter number of rows and columns: ");
    scanf("%d %d", &nr, &nc);
    for(i=1; i<=nr; i++)
    {
        for(j=nc; j>=1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

/*
Enter number of rows and columns: 5
5

5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
*/