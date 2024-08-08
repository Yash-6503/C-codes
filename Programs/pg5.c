//Program to convert tepm. from Fahrenheit to celcius

#include<stdio.h>
void main()
{
    float celcius, Fahrenheit;
    printf("\nEnter Temp in Fahrenheit: ");
    scanf("%f", &Fahrenheit);
    celcius = (Fahrenheit-32)*5/9;
    printf("\n%.2f Fahrenheit in Celcius is %.2f", Fahrenheit, celcius);
}

/*Output
Enter Temp in Fahrenheit: 98.6
98.60 Fahrenheit in Celcius is 37.00

Enter Temp in Fahrenheit: 97.6
97.60 Fahrenheit in Celcius is 36.44
*/