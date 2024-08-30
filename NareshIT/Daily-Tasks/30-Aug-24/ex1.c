/*
1.
Write C program to given pattern.
--------

1  1  1  1  1
2  2  2  2  2
3  3  3  3  3 
4  4  4  4  4
5  5  5  5  5
*/

#include<stdio.h>
void main()
{
    int nc, nr, i, j;
    printf("\nEnter number of rows and columns: ");
    scanf("%d %d", &nr, &nc);
    for(i=1; i<=nr; i++)
    {
        for(j=1; j<=nc; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}

/*
Enter number of rows and columns: 5
5

1 1 1 1 1 
2 2 2 2 2 
3 3 3 3 3 
4 4 4 4 4 
5 5 5 5 5 
*/