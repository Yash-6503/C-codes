//MCQ question

#include<stdio.h>
void main()
{
    int a = 5;
    a += 3 * 2;
    printf("a = %d", a);        //11
}

/*
output
a+=3*2
priority [*, +, =]
1.* => 3*2 => 6
2.+ => a=a+6 => 5+6 => 11 => a=11
*/