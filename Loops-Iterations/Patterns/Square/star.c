//square star pattern program

#include<stdio.h>
void main()
{
    int nc, i, j, nr;
    printf("\nEnter number of columns & rows: ");
    scanf("%d %d", &nr, &nc);
    for(i=1; i<=nr; i++)
    {
        for(j=1; j<=nc; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

/*
Enter number of columns & rows: 5
5
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
*/

/*
Enter number of columns & rows: 4
5
* * * * * 
* * * * * 
* * * * * 
* * * * * 
*/