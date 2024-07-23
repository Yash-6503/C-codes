//Modulus [Percentage] Operator Examples

#include<stdio.h>
int main()
{
    int a = 5%2;
    printf("\na = %d", a);
    printf("\n%d", 11 % 10);
    printf("\n%d", 74 % 10);
    printf("\n%d", 123 % 10);
    printf("\n");
    return 0;
}

//Modulus [Percentage] Operator always returns answer as remainder
//Any number % 10 always gives last digit 
//ex. 123 % 10 = 3