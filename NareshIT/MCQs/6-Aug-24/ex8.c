//Find the output of following code

#include<stdio.h>
int main() 
{ 
    printf("%d", 1.9); 
    return 0;
}

/* output
Garbage value
-1480259928
*/

/* Output explanation
printf("%d", 1.9);
Hera, 
value given is in float and conversion character [Format specifier] is 
in %d i.e it is int type

So, the output will be Garbage Value
-1480259928

Note, Whenever there is float value with %d it will show garbage value
*/