// What will be the output of the following code snippet?

#include<stdio.h>
int main() 
{ 
    int a = 10; 
    int b =15; 
    int c = a++ + b--; 
    printf("a = %d, b = %d, c = %d\n", a, b, c); 
    return 0; 
}

/* output
a = 11
b = 14
c = 25
*/

/* output explanation
int a = 10; 
int b =15; 
int c = a++ + b--; 
a++ => a=a+1 => 10+1 => 11 => a=11
b-- => b=b-1 => 15-1 => 14 => a=14
c = a + b => 11+14 => 25 => c = 25
*/