// C Program to Find Largest Number Among Three Numbers

#include<stdio.h>
int main()
{
    int num1, num2, num3;
    int i, j;
    printf("\nEnter 3 Numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if(num1 >= num2 && num1 >= num3)
    {
        printf("\n%d is greater than %d and %d", num1, num2, num3);
    }
    else if(num2 >= num3 && num2 >= num1)
    {
        printf("\n%d is greater than %d and %d", num2, num1, num3);
    }
    else
    {
        printf("\n%d is greater than %d and %d", num3, num1, num2);
    }
    return 0;
}