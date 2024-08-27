/*
6.
Write a program in C to display the n terms of a harmonic series and their sum.

1 -1/2 +1/3 - 1/4 + 1/5 -1/6... 1/n terms
Sample Input
Enter the value of n: 5
Sample Output
Harmonic Series: 1 - 1/2 + 1/3 - 1/4 + 1/5


Sum of the series: 0.783333
*/

#include<stdio.h>
void main()
{
    int n, i;
    float sum=0, f=1.0;
    printf("\nEnter Number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        if(i==1)
        {
            printf("1");
            sum+=f/i;
        }
        else if(i%2==0)
        {
            printf(" - 1/%d", i);
            sum-=f/i;
        }
        else{
            printf(" + 1/%d", i);
            sum+=f/i;
        }


    }
    printf("\nSum = %f", sum);
}

/*
Enter Number: 5
1 - 1/2 + 1/3 - 1/4 + 1/5
Sum = 0.783333
*/