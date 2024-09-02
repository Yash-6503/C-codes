#include<stdio.h>
void main()
{
    int n, i, j, a;
    printf("\nEnter number of rows: ");
    scanf("%d", &n);
    a=n*(n+1)/2;            //formula to reverse
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%4d", a--);
        }
        printf("\n");
    }
}

/*
Enter number of rows: 5
  15
  14  13
  12  11  10
   9   8   7   6
   5   4   3   2   1
*/