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
            printf("%4d", j);
        }
        printf("\n");
    }
}

/*
Enter number of rows: 10
   1
   1   2
   1   2   3
   1   2   3   4
   1   2   3   4   5
   1   2   3   4   5   6
   1   2   3   4   5   6   7
   1   2   3   4   5   6   7   8
   1   2   3   4   5   6   7   8   9
   1   2   3   4   5   6   7   8   9  10
*/