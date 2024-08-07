#include <stdio.h>
int main() {
    int a = 9, b = 9;
    a = --b;        // a=8// b=18
    b = ++a;        // b=9 //a=9
    b = --b;        // b=8
    printf("%d %d", a, b);
    return 0;
}
