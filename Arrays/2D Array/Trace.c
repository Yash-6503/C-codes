/*
Write a Program to Find a trace of n*n matrix:
Sum of principle diagonal elements is called trace.
*/

#include<stdio.h>
void main()
{
    int a[10][10], nr, nc, sum=0, r, c;
    printf("\nEnter number of rows & columns: ");
    scanf("%d %d", &nr, &nc);
    if(nr == nc)
    {
        printf("\nEnter %d elements: ", nr*nc);
        for(r=0; r<nr; r++)
        {
            for(c=0; c<nc; c++)
            {
                scanf("%d", &a[r][c]);
                if(r==c){
                    sum+=a[r][c];
                }
            }
        }
        printf("\nTrace = %d", sum);
    }else{
        printf("\nrows & columns should be same.");
    }
}

/*
Enter number of rows & columns: 3 3

Enter 9 elements: 
1 2 3
4 5 6
7 8 9

Trace = 15
*/

/*
Enter number of rows & columns: 1
3

rows & columns should be same
*/