// Write a C Program to Check Whether Number is Even or Odd

#include<stdio.h>

int main()
{
    int num;
    printf("\nEnter a Number: ");
    scanf("%d", &num);

    if(num %2 == 0)
    {
        printf("\nNumber is Even");
    }
    else{
        printf("\nNumber is Odd");
    }
}