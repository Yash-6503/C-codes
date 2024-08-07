#include <stdio.h>
int main() {
    int a, b;
    b = 10;
    a = ++b + ++b;
    printf("%d %d", a, b);
    return 0;
}
