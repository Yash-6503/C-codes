//MCQ questions

#include<stdio.h>
int main()
{
    int x = 15;
    int y = 2;
    int z = x / y + x % y;
    printf("z = % d\n", z);     //8
    return 0;
}

/*
output
z = x / y + x % y;
priority [/, %, +, =]
1.x/y => 15/2 => 7 
2.x%y => 15%2 => 1
3.+ => 7+1 => 8
4. z = 8
*/