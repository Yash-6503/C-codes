//MCQ questions

#include<stdio.h>
int main()
{
    int x = 10;
    int y = 5;
    int z = x - --y;
    printf("x = % d, y = % d, z = % d\n", x, y, z);     //10, 4, 6
    return 0;
}

/* output
z = x - --y;
priority [--y, -, =]
1.--y => y=y-1 => 5-1 => 4 => y=4
2.- => z=x-y => 10-4 => 6 => z=6
hence answer is 
x = 10
y = 4
z = 6
*/