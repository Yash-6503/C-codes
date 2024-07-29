//sizeof operator example

#include<stdio.h>
int main()
{
    printf("%d, %d, %d\n", sizeof(-5), sizeof(5), sizeof(32767));
    printf("%d, %d, %d\n", sizeof(32768), sizeof(50000), sizeof(70000));
    printf("%d, %d, %d\n", sizeof(32768u), sizeof(50000U), sizeof((unsigned)70000));
    return 0;
}

/* vs code output
output
4, 4, 4
4, 4, 4
4, 4, 4
*/

/*
output explanation
1.printf("%d, %d, %d\n", sizeof(-5), sizeof(5), sizeof(32767));
ans => 4, 4, 4
2.printf("%d, %d, %d\n", sizeof(32768), sizeof(50000), sizeof(70000));
ans => 4, 4, 4
3.printf("%d, %d, %d\n", sizeof(32768u), sizeof(50000U), sizeof((unsigned)70000));
ans => 4, 4, 4
*/