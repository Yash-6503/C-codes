//Find the Output of following code

#include <stdio.h>
int main() 
{ 
    int a = 4, b, c; 
    b = -a; 
    c = a-;
    printf("%d %d %d",a,b,c); 
    return 0; 
}

/* output
2,3,3
*/

/* output explanation
a = 4;
b = -a, c = a-;
1.b = -a => b = -4 => 4-1 => 3
2.c = a- => c = 4- => 4-1 => 3
3. a = 4-2 => 2
Hence, answer is 
2,3,3
*/