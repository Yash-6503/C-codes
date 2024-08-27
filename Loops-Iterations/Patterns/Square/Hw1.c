/*
Program to print o/p like this
ABCD
DCBA
ABCD
*/

#include<stdio.h>
void main()
{
    int nr, nc, i, j, a=65;
    printf("\nEnter no of rows and columns: ");
    scanf("%d %d", &nr, &nc);
    for(i=1; i<=nr; i++)
    {
        for(j=1; j<=nc; j++)
        {
           if(i%2==0)
           {
                printf("%2c", --a);
           }
           else{
                printf("%2c", a++);
           }
        }
        printf("\n");
    }
}


/*
Enter no of rows and columns: 3
4
 A B C D
 D C B A
 A B C D
*/