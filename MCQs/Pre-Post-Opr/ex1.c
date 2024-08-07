#include <stdio.h>
int main() {
    int x = 4, y, z;
    y = --x;
    z = x--;
    printf("%d, %d, %d\n", x, y, z);        //2,3,3
    return 0;
}

/*
z = 2
x = 3
y = 3
*/

/* Output explantion
x = 4, y, z;
y = --x;
z = x--;
To find values we will go step by step
1. y = --x => x-1 => 4-1 => 3 => y=3
2. z = x-- => x-1 => 4-1 => 3 => y=3
3. x = 2
*/