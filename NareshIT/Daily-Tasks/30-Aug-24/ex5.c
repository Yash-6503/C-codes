/*
5.
Write C program to given pattern.
--------

1   2   3   4   5  
2   4   6   8   10
3   6   9   12  15
4   8   12  16  20
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
            printf("%4d", i*j);
        }
        printf("\n");
    }
}

/*
Enter number of rows and columns: 5
5

   1   2   3   4   5
   2   4   6   8  10
   3   6   9  12  15
   4   8  12  16  20
   5  10  15  20  25
*/