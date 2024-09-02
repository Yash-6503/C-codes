/*
Write a C program to calculate sum and find average of
array elements by taking input from user.
*/

#include<stdio.h>
void main()
{
    float a[10], sum=0;
    int i, j, n;
    printf("\nEnter how many elements: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%f", &a[i]);
        sum+=a[i];
    }
    printf("\nSum = %.2f \nAvg = %.2f", sum, sum/n);
}

/*
Enter how many elements: 5

Enter 5 elements: 
10
20
30
40
50

Sum = 150.00 
Avg = 30.00
*/