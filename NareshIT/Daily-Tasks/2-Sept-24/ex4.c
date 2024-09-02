/*
Que 4 : Write C program to given pattern.
--------

A  B  C  D  
B  C  D  E
C  D  E  F
D  E  F  G
*/

#include<stdio.h>
void main()
{
    int nr, nc, i, j, a;
    printf("\nEnter number of rows & columns: ");
    scanf("%d %d", &nr, &nc);
    a = 65;
    for(i=1; i<=nr; i++)
    {
        for(j=1; j<=nc; j++)
        {
            printf("%2c", a);
            a++;
        }
        a = a - 3;
        printf("\n");
    }
}

/*
Enter number of rows & columns: 4
4
 A B C D
 B C D E
 C D E F
 D E F G
*/