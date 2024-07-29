//Seperators example

#include<stdio.h>
int main()
{
    int a;
    a = printf("Taare "), printf("Zameen Per");
    printf(" a=%d\n", a);
    return 0;
}

/*
output
Taare Zameen Per a = 6
*/

/*
output explanation
a = printf("Taare "), printf("Zameen Per")
here first printf will be directly printed
then priority [() = ,]
1.p("Taare ") => 6 characters
2.a = 6
*/