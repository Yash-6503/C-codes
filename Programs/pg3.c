// Read radius of a circle and find the area and circumference.

#include<stdio.h>
void main()
{
    const float pi=3.14;
    float radius, area, CF;
    printf("\nEnter radius of Circle: ");
    scanf("%f", &radius);
    area = pi * radius * radius;
    CF = 2 * pi * radius;
    printf("\nArea of circle is %.2f", area);
    printf("\nCircumference of circle is %.2f", CF);
}


/*
Enter radius of Circle: 10            
Area of circle is 314.00
Circumference of circle is 62.80

Enter radius of Circle: 20
Area of circle is 1256.00
Circumference of circle is 125.60

Enter radius of Circle: 2
Area of circle is 12.56
Circumference of circle is 12.56
*/