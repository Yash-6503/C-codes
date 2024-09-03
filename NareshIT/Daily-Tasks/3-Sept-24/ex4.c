/*
Que 4 : Write C program to given pattern.
--------

1
1   2
3   4   5 
6   7   8   9
10  11  12  13  14

*/

#include<stdio.h>
void main()
{
    int n, i, j, a;
    printf("\nEnter Number: ");
    scanf("%d", &n);
    a=1;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%4d", a);
            a++;
        }
        if(j==2)
            a=a-1;
        printf("\n");
    }
}


/*
Enter Number: 5
   1
   1   2
   3   4   5
   6   7   8   9
  10  11  12  13  14
*/