#include <stdio.h>

int main()
{
    int choice, num1, num2, result;
    do
    {
        printf("\nMenu Driven Program");
        printf("\n1.Addition");
        printf("\n2.Substract");
        printf("\n3.Multiply");
        printf("\n4.Divide");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter 2 numbers to add: ");
            scanf("%d%d", &num1, &num2);
            result = num1 + num2;
            printf("\nAddition of %d and %d is %d", num1, num2, result);
            break;

        case 2:
            printf("\nEnter 2 numbers to sub: ");
            scanf("%d%d", &num1, &num2);
            result = num1 - num2;
            printf("\nSubstraction of %d and %d is %d", num1, num2, result);
            break;

        case 3:
            printf("\nEnter 2 numbers to multiply: ");
            scanf("%d%d", &num1, &num2);
            result = num1 * num2;
            printf("\nMultiplication of %d and %d is %d", num1, num2, result);
            break;

        case 4:
            printf("\nEnter 2 numbers to divide: ");
            scanf("%d%d", &num1, &num2);
            result = num1 / num2;
            printf("\nDivision of %d and %d is %d", num1, num2, result);
            break;

        default:
            printf("Invalid Choice");
            break;
        }
    } while (choice != 4);
}