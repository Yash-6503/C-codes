// Area of Square
#include <stdio.h>
int main()
{
    float side, area;
    printf("Enter the side of square: ");
    scanf("%f", &side);
    area = side * side;
    printf("Area of square: %f", area);
    return 0;
}