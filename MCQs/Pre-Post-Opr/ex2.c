#include <stdio.h>
int main() {
    int a = 1, b = 3;
    b = a++ + a++ + a++ + a++ + a++;
    printf("a = %d\nb = %d", a, b);
    return 0;
}

/* output
a = 6
b = 15
*/

/* output explanation
a = 1, b = 3;
b = a++ + a++ + a++ + a++ + a++;
priority [+, =, ++]
1.+ => a+a+a+a+a => 1+1+1+1+1 => a=5+1 => a=6
2.= => a = 6
3.a++ => 1+2+3+4+5 => 15 => b=15
*/