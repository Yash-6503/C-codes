//Bitwise Operator example

#include<stdio.h>
int main()
{
    int a = 10;
    printf("a = %d\n", a=a<<2);     //40
    printf("a = %d\n", a=a>>3);     //5
    return 0;
}

/* output
a = 40
a = 5
*/

/* Output explanation 1st operation
a = 10;
a=a<<2;
10+10 => 20+20 => 40
a = 40;
*/

/* Output explanation 2nd operation
a = 40;
a=a>>3;
40/2 => 20/2 => 10/2 => 5
a = 5;
*/