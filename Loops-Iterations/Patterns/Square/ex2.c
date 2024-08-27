// Number Sequence Square pattern program

#include<stdio.h>
void main()
{
    int nr, nc, i, j, a=1;
    printf("\nEnter no of rows and columns: ");
    scanf("%d %d", &nr, &nc);
    for(i=1; i<=nr; i++)
    {
        // a=i;         //last o/p
        for(j=1; j<=nc; j++)
        {
          printf("%3d", a++);
        }
        printf("\n");
    }
}

/*
Enter no of rows and columns: 5
5
  1  2  3  4  5
  6  7  8  9 10
 11 12 13 14 15
 16 17 18 19 20
 21 22 23 24 25
*/

/*
Enter no of rows and columns: 5
10
  1  2  3  4  5  6  7  8  9 10
 11 12 13 14 15 16 17 18 19 20
 21 22 23 24 25 26 27 28 29 30
 31 32 33 34 35 36 37 38 39 40
 41 42 43 44 45 46 47 48 49 50
*/

/* last o/p
Enter no of rows and columns: 5
5
  1  2  3  4  5
  2  3  4  5  6
  3  4  5  6  7
  4  5  6  7  8
  5  6  7  8  9
*/