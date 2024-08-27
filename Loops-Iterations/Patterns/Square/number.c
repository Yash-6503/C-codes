//Square Number pattern program

#include<stdio.h>
void main()
{
    int nr, nc, i, j;
    printf("\nEnter no of rows and columns: ");
    scanf("%d %d", &nr, &nc);
    for(i=1; i<=nr; i++)
    {
        for(j=1; j<=nc; j++)
        {
            // printf("%d ", i);    //1st o/p
            printf("%d ", j);       //2nd o/p
        }
        printf("\n");
    }
}

/* 1st O/p
Enter no of rows and columns: 5
5
1 1 1 1 1 
2 2 2 2 2 
3 3 3 3 3 
4 4 4 4 4 
5 5 5 5 5
*/

/*2nd o/p
Enter no of rows and columns: 10
10
1 2 3 4 5 6 7 8 9 10 
1 2 3 4 5 6 7 8 9 10 
1 2 3 4 5 6 7 8 9 10 
1 2 3 4 5 6 7 8 9 10 
1 2 3 4 5 6 7 8 9 10 
1 2 3 4 5 6 7 8 9 10 
1 2 3 4 5 6 7 8 9 10 
1 2 3 4 5 6 7 8 9 10 
1 2 3 4 5 6 7 8 9 10 
1 2 3 4 5 6 7 8 9 10 
*/