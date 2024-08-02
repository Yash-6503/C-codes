//MCQ questions

#include<stdio.h>
int main()
{
    int x = 3;
    int y = 2;
    int z = x++ * (x + y) - --y;
    printf("z = % d\n", z);         //17
    return 0;
}

/*output
z = x++ * (x + y) - --y;
priority [(), --y, *, -, x++]
1.x++ => x=x+1 => 3+1 => 4 => x=4 later updeted
2.() => (x+y) => (4+2) => 6
3.--y => y=y-1 => 2-1 => 1 => y=1
4.* => x*6 => 3*6 => 18 => z=18
5.- => z=z-y => 18-1 => 17 => z=17
hence, answer is 
x = 4
y = 3
z = 17

*/