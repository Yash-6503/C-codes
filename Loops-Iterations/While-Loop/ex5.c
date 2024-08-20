//Finding 1-n numbers sum and average without using loop & using loop

#include<stdio.h>
void main()
{
    int n, sum=0, i=1;
    float avg;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    /* without using loop
    sum = n*(n+1)/2;
    */
    //with using loop
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    printf("\nSum = %d", sum);
    printf("\nAvg = %.2f", (float) sum/n);
}

/*
Enter a number: 4
Sum = 10
Avg = 2.50

Enter a number: 10
Sum = 55
Avg = 5.50
*/