//MCQ questions

#include<stdio.h>
int main()
{
    int a = 5;
    int b = 10;
    int c = 15;
    int result = a++ * ++b - --c;
    printf("result = % d\n", result);
    return 0;
}

/*
a++ * ++b - --c
priority [++b, --c, *, -, =, a++]
1.++b => b=b+1 => b=10+1 => 11 => b=11
2.--c => c=c-1 => c=15-1 => 14 => c=14
3.* => result=a*b => 5*11 => 55 => result=55
4.- => result - c => 55-14 => 41 => result=41
5.a++ => a=a+1 => a=5+1 => 6 => a=6
*/