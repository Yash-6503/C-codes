/*
Program to priint this o/p
AAAA
bbbb
CCCC
dddd
*/

#include<stdio.h>
void main()
{
    int nr, nc, i, j, a=65, b=97;
    printf("\nEnter no of rows and columns: ");
    scanf("%d %d", &nr, &nc);
    for(i=1; i<=nr; i++)
    {
        for(j=1; j<=nc; j++)
        {   
            if(i%2==0)
            {
                printf("%2c", b);
            }else{
                printf("%2c", a);
            }
        }
        a=a+1;
        b=b+1;
        printf("\n");
    }
}

/*
Enter no of rows and columns: 4
5
 A A A A A
 b b b b b
 C C C C C
 d d d d d
*/
