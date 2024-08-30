/*
4.
Write C program to given pattern.
--------

1  2  3  4  5
2  3  4  5  6
3  4  5  6  7
4  5  6  7  8
5  6  7  8  9
*/

#include<stdio.h>
void main()
{
    int nc, nr, i, j;
    printf("\nEnter number of rows and columns: ");
    scanf("%d %d", &nr, &nc);
    for(i=1; i<=nr; i++)
    {
        for(j=0; j<nc; j++)
        {
            printf("%d ", i+j);
        }
        printf("\n");
    }
}

/*
Enter number of rows and columns: 5
5

1 2 3 4 5 
2 3 4 5 6 
3 4 5 6 7 
4 5 6 7 8 
5 6 7 8 9 
*/