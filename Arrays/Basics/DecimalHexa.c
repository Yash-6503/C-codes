/*
Write a C program to convert Decimal number to 
Hexadecimal code using arrays
*/

#include<stdio.h>
void main()
{
    int n, a[16]={0}, i;
    printf("\nEnter Number: ");
    scanf("%d", &n);
    for(i=0; n!=0; i++, n=n/16)
    {
        a[i] = n%16;
    }
    printf("\nHexadecimal code is: ");
    for(i=15; i>=0; i--)
    {
        if(a[i] < 10)
        {
            printf("%2d", a[i]);
        }else{
            printf("%2c", 87+a[i]); 
        }
    }
}

/*
Enter Number: 45
Hexadecimal code is:  0 0 0 0 0 0 0 0 0 0 0 0 0 0 2 d

Enter Number: 95
Hexadecimal code is:  0 0 0 0 0 0 0 0 0 0 0 0 0 0 5 f

Enter Number: 20
Hexadecimal code is:  0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 4
*/