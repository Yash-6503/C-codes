//Bitwise Operator

#include<stdio.h>
int main()
{
    int a = 10;
    a = a<<2+1>>2;
    printf("a = %d\n", a);      //20
    return 0;
}

/* output
a = 20
*/

/* output explanation
a = 10
a = a<<2+1>>2;
a<<3>>2;
10+10 => 20+20 => 40+40 => 80
80/2 => 40/2 => 20
a = 20
*/