/*
Program to find LCM - (Least Common Multiple) of 2 numbers
*/

#include<stdio.h>
void main()
{
    int a, b, max, lcm;
    printf("\nEnter a and b value: ");
    scanf("%d %d",&a, &b);
    max = (a>b) ? a : b;
    lcm = max;
    while((lcm%a != 0) || (lcm%b != 0))
    {
        lcm += max;
    }
    printf("\nLCM = %d", lcm);
}

/*
Enter a and b value: 10 15
LCM = 30

Enter a and b value: 20 30
LCM = 60
*/