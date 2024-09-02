#include<stdio.h>
void main()
{
    int n, i, j;
    printf("\nEnter number of rows: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%4d", i);
        }
        printf("\n");
    }
}

/*
Enter number of rows: 10
   1
   2   2
   3   3   3
   4   4   4   4
   5   5   5   5   5
   6   6   6   6   6   6
   7   7   7   7   7   7   7
   8   8   8   8   8   8   8   8
   9   9   9   9   9   9   9   9   9
  10  10  10  10  10  10  10  10  10  10
*/