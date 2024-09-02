/*
Que 2 : Write C program to given pattern.
--------

1   6   11   16  
2   7   12   17
3   8   13   18
4   9   14   19
5   10  15   20
*/

#include<stdio.h>
void main()
{
    int nr, nc, i, j, a;
    printf("\nEnter row & column: ");
    scanf("%d %d", &nr, &nc);
    a=1;
    for(i=1; i<=nr; i++)
    {
        for(j=1; j<=nc; j++)
        {
            printf("%4d", a);
            a = a+5;
        }
        // printf("\tA = %d", a);
        a = a-19;
        printf("\n");
    }
}

/*
Enter row & column: 5
4
   1   6  11  16
   2   7  12  17
   3   8  13  18
   4   9  14  19
   5  10  15  20
*/