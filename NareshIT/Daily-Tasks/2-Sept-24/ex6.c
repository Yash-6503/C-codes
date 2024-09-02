/*
Que 6 : Write C program to given pattern.
--------

E  J  O  T  Y
D  I  N  S  X
C  H  M  R  W
B  G  L  Q  V
A  F  K  P  U
*/

#include<stdio.h>
void main()
{
    int nr, nc, i, j, a;
    printf("\nEnter number of rows & columns: ");
    scanf("%d %d", &nr, &nc);
    a = 69;
    for(i=1; i<=nr; i++)
    {
        for(j=1; j<=nc; j++)
        {
            printf("%2c", a);
            a += 5;
        }
        a = a - 26;
        printf("\n");
    }
}

/*
Enter number of rows & columns: 5
5
 E J O T Y
 D I N S X
 C H M R W
 B G L Q V
 A F K P U
*/