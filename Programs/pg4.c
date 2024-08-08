//Program to convert celcius to Fahrenheit 

#include<stdio.h>
void main()
{
    float celcius, Fahrenheit;
    printf("\nEnter Temp in Celcius: ");
    scanf("%f", &celcius);
    Fahrenheit = celcius*1.8+32;
    printf("\n%.2f Celcius in Fahrenheit is %.2f", celcius, Fahrenheit);
}


/*
Enter Temp in Celcius: 36.7
36.70 Celcius in Fahrenheit is 98.06

Enter Temp in Celcius: 40
40.00 Celcius in Fahrenheit is 104.00
*/