//Program to reverse the 3 digit number
#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter a 3 digit number: ");
    scanf("%d", &n);
    printf("%d reverse is %d", n, n%10);
    printf("%d",n/10%10);
    printf("%d", n/10/10);
    printf("\n%d reverse is %d%d%d", n, n%10, n/10%10, n/10/10);
    return 0;
}