/*
Program to print n perfect numbers 
*/

#include<stdio.h>
void main()
{
    int n1, n2, i, j, sum=0;
    printf("\nEnter starting and ending values: ");
    scanf("%d %d", &n1, &n2);
    for(i=n1; i<=n2; i++)
    {
        sum=0;
        for(j=1; j<i; j++)
        {
            if(i%j == 0)
            {
                sum += j;
            }
        }
        // printf("\nSum = %d, %d", sum, i);
        if(sum == i)
        {
            printf("\n%d is Perfect Number", i);
        }
    }
}

/*
Enter starting and ending values: 1
999

6 is Perfect Number
28 is Perfect Number
496 is Perfect Number
*/