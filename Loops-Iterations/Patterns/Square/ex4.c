#include<stdio.h>
void main()
{
    int n, i, j;
    printf("\nEnter number of rows: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j==i) printf("1 ");
            if(j>i) printf("2 ");
            if(j<i) printf("0 ");
        }
        printf("\n");
    }
}

/*
Enter number of rows: 3
1 2 2 
0 1 2 
0 0 1
*/

/*
Enter number of rows: 10
1 2 2 2 2 2 2 2 2 2 
0 1 2 2 2 2 2 2 2 2 
0 0 1 2 2 2 2 2 2 2 
0 0 0 1 2 2 2 2 2 2 
0 0 0 0 1 2 2 2 2 2 
0 0 0 0 0 1 2 2 2 2 
0 0 0 0 0 0 1 2 2 2 
0 0 0 0 0 0 0 1 2 2 
0 0 0 0 0 0 0 0 1 2 
0 0 0 0 0 0 0 0 0 1 
*/