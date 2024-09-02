/*
Que 3 : Write C program to given pattern.
--------

1   10   11   20
2   9    12   19 
3   8    13   18
4   7    14   17
5   6    15   16
*/

#include<stdio.h>
void main()
{
    int nr, nc, i, j, a, b, c, p;
    printf("\nEnter number of rows & columns: ");
    scanf("%d %d", &nr, &nc);
    a=10;
    b=a;
    c=a+a;
    p=9;
    for(i=1; i<=nr; i++)
    {
        for(j=1; j<=1; j++)
        {
            c = i + b + p;
            printf("%4d %4d %4d %4d", i, a, b+i, c);
            c=a+a-1;
            p=p-2;
            a--;

        }
        printf("\n");
    }
}

/*
Enter number of rows & columns: 5
4
   1   10   11   20
   2    9   12   19
   3    8   13   18
   4    7   14   17
   5    6   15   16
*/