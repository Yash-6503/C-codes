/*
Que 5 : Write C program to given pattern.
--------

A  E  I  M
B  F  J  N
C  G  K  O
D  H  L  P
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
            a = a+4;
        }
        a = a - 15;
        printf("\n");
    }
}

/*
Enter number of rows & columns: 4
4
 A E I M
 B F J N
 C G K O
 D H L P
*/