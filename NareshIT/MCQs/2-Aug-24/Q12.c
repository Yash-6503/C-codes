// MCQ questions

#include<stdio.h>
int main()
{
    int a = 3;
    int b = 4;
    int result = (a += b) * (b -= 2);
    printf("result = %d\n", result);        //14
    return 0;
}

/* output
result = (a += b) * (b -= 2);
priority [(), *, =]
1.() => (a+=b) => (a=a+b) => (3+4) => a=7
2.() => (b-=2) => (a=b-2) => (4-2) => b=2
3.* => 7*2 => 14
4.result = 14
hence, answer is
result = 14
*/