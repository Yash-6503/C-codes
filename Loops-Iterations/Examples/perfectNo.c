/*
Program to find perfect number
*/

#include<stdio.h>
void main()
{
    int n, i, j, sum=0;
    printf("\nEnter number: ");
    scanf("%d", &n);
    for(i=1; i<n; i++)
    {
        if(n%i==0)
        {
            sum = sum + i;
        }
    }
    if(sum == n)
    {
        printf("\n%d is Perfect Number", n);
    }else{
        printf("\n%d is not Perfect Number", n);
    }
}

/*
Enter number: 6
6 is Perfect Number

Enter number: 28
28 is Perfect Number

Enter number: 496
496 is Perfect Number

Enter number: 100
100 is not Perfect Number

Enter number: 200
200 is not Perfect Number
*/