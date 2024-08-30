/*
3.
Write C program to given pattern.
--------

1   2   3   4   5
6   7   8   9   10
11  12  13  14  15
16  17  18  19  20
21  22  23  24  25
*/

#include<stdio.h>
void main()
{
    int nc, nr, i, j, a=1;
    printf("\nEnter number of rows and columns: ");
    scanf("%d %d", &nr, &nc);
    for(i=1; i<=nr; i++)
    {
        for(j=0; j<nc; j++)
        {
            printf("%4d ", a);
            a++;
        }
        printf("\n");
    }
}


/*
Enter number of rows and columns: 5
5

   1    2    3    4    5 
   6    7    8    9   10 
  11   12   13   14   15 
  16   17   18   19   20 
  21   22   23   24   25 
*/