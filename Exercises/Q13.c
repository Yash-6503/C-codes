// Write a C Program to Generate Multiplication Table 

#include<stdio.h>
int main()
{
    int num, i = 1;
    printf("\nEnter a Number to generate Table: ");
    scanf("%d",&num);
    for(i = 1; i <= 10; i++)
    {
        printf("%d ", num * i);
    }
    return 0;
}