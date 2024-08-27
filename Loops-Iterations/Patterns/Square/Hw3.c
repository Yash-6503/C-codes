/*
Program to print this o/p
AAAA
aaaa
BBBB
bbbb
*/

#include<stdio.h>
void main()
{
    int nr, nc, i, j,a, b;
    printf("\nEnter no of rows and columns: ");
    scanf("%d %d", &nr, &nc);
    a=64;
    b=96;
    for(i=1; i<=nr; i++)
    {
        ++a;
        if(i%2==0)
            ++b;
        for(j=1; j<=nc; j++)
        {
            if(i%2==0)
            {
                printf("%2c", b);                    
            }else{
                printf("%2c", a);
            }
        }
        a = 64+1;
        if(i%2==0)
        b = 96+1;
        printf("\n");
    }
}


/*
Enter no of rows and columns: 4
5
 A A A A A
 a a a a a
 B B B B B
 b b b b b
*/