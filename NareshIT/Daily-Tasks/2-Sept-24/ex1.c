/*
Que 1 : Write C program to given pattern.
--------

1   2   3   4   5
10  9   8   7   6
11  12  13  14  15
20  19  18  17  16
*/

#include<stdio.h>
void main()
{
    int nr, nc, i, j, num=1, rev=0;
    printf("\nEnter Number: ");
    scanf("%d %d", &nr, &nc);
    for(i=1; i<=nr; i++)
    {
        
        if(i%2 == 0)
        {
            rev = num + nc - 1;
            for(j=nc; j>=1; j--)
            {
                printf("%4d", rev--);
            }
            num += nc;
        }else{
            for(j=1; j<=nc; j++)
            {
                printf("%4d", num++);
            }
        }
        printf("\n");
    }
}

/*
Enter Number: 4
5
   1   2   3   4   5
  10   9   8   7   6
  11  12  13  14  15
  20  19  18  17  16
*/