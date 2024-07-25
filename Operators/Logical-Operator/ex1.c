//Logical Operators Example
#include<stdio.h>
int main()
{
    int a, b, c, d;
    a = 0 && printf("I Love ");
    b = 1 && printf("I Like ");
    c = 0 || printf("Rashmika Mandana\n");
    c = 1 || printf("Virat Kohli\n");
    printf("a = %d, b = %d, c = %d, d = %d", a, b, c, d);
    return 0;
}

/*
output
I Like Rashmika Mandana
a = 0, b = 1, c = 1, d = 0
*/