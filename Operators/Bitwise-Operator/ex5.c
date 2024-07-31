//Bitwise Operator example

#include<stdio.h>
int main()
{
    int a = 10;
    a<<=2+1;
    printf("a = %d\n", a);      //80
    return 0;
}

/*output
a = 80
*/

/* output explanation
a<<=2+1
a = a<<2+1
a = a<<3
a = 10+10 => 20+20 => 40+40 => 80
a = 80
*/