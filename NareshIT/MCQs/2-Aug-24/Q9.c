//MCQ questions

#include<stdio.h>
int main()
{
    int a = 10, b = 20, c = 10;
    int result = (a > b) || (b == c) && (c != a);
    printf("result = % d\n", result);       //0
    return 0;
}

/* output
result = (a > b) || (b == c) && (c != a)
priority [(), &&, ||, =]
1.() => (a > b) => (10 > 20) => 0 - false
1.() => (b == c) => (20 == 10) => 0 - false
1.() => (c != a) => (10 != 10) => 0 - false

2.&& => (b == c) && (c != a)
        (20==10) && (10!=10)
            0           0
                  0 - false
    here, && => 0

3.|| => (a > b) || 0
        (10>20) || 0
            0   || 0
                0 - false

4. = => result = 0
*/