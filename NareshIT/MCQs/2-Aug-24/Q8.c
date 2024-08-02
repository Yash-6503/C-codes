//MCQ questions

#include<stdio.h>
int main()
{
    int a = 10;
    int b = 15;
    int c = a++ + b--;
    printf("a = % d, b = % d, c = % d\n", a, b, c);     //11, 14, 25
    return 0;
}

/* output
c = a++ + b--;
priority [+, =, a++, b--]
1.+ => a+b => 10+15 => 25 => c=25
2.a++ => a=a+1 => 10+1 => 11 => a=11
3.b-- => b=b-1 => 15-1 => 14 => b=14
hence answer is,
a = 11
b = 14
c = 25
*/
