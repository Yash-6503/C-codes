//Address Operator example

#include<stdio.h>
int main()
{
    int a = 100;
    int *p;
    p = &a;
    printf("a value = %d\n", a);
    printf("a address value = %u\n", &a);
    printf("p value = %u\n", p);
    return 0;
}

/*
output
a value = 100
a address value = 440472540
p value = 440472540
*/

/*
Output explanation
int a = 100;
int *p;
p = &a;
printf("a value = %d\n", a);
ans => a value = 100
printf("a address value = %d\n", &a);
ans => a address value = 440472540
here, address value & pointer value will be same because pointer stores address of another variable
printf("p value = %u\n", p);
ans => p value = 440472540
*/