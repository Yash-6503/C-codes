// MCQ questions

#include<stdio.h>
int main()
{
    int a = 15, b = 4, c = 3;
    int result = (a + b) % c * b;
    printf("result = % d\n", result);       //4
    return 0;
}

/* output
result = (a + b) % c * b;
priority [(), *, %]
1.() => (a+b) => (15+4) => 19
2.%  =>  19%c  =>  19%3  => 1
3.*  =>  1*b => 1*4 => 4
hence, result = 4
*/