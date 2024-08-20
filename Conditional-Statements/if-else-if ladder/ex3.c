//Finding Max in 3 numbers

#include<stdio.h>
void main()
{
    int a, b, c;
    printf("\nEnter a, b, c values: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c)
    {
        printf("\nA[%d] is big", a);
    }
    else if(b>a && b>c)
    {
        printf("\nB[%d] is big", b);
    }
    else if(a==b && b==c && a==c)
    {
        printf("\nAll are Big");
    }
    else if(a==b)
    {
        printf("\nA[%d] and B[%d] are Big", a, b);
    }
    else if(a==c)
    {
        printf("\nA[%d] and C[%d] are Big", a, c);
    }
    else if(b==c)
    {
        printf("\nB[%d] and C[%d] are Big", b, c);
    }
    else{
        printf("\nC[%d] is big", c);
    }
}

/*
Enter a, b, c values: 30
20
10

A[30] is big
*/

/*
Enter a, b, c values: 10
20
10

B[20] is big
*/

/*
Enter a, b, c values: 50
30
60

C[60] is big
*/

/*
Enter a, b, c values: 10
10
9

A[10] and B[10] are Big
*/

/*
Enter a, b, c values: 10
5
10

A[10] and C[10] are Big
*/

/*
Enter a, b, c values: 10
20
20

B[20] and C[20] are Big
*/

/*
Enter a, b, c values: 10
10
10

All are Big
*/