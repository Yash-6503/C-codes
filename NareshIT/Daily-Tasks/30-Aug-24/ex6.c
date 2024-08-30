/*
6.
Write C program to given pattern.
--------

1  1  1  2  1  3
2  1  2  2  2  3
3  1  3  2  3  4 
4  1  4  2  4  3

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
            printf("%d %d ", i, j);
        }
        printf("\n");
    }
}

/*
Enter number of rows and columns: 4
3

1 1 1 2 1 3 
2 1 2 2 2 3 
3 1 3 2 3 3 
4 1 4 2 4 3 
*/