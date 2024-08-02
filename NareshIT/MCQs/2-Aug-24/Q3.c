//MCQ questions

#include<stdio.h>
int main()
{
    int x = 3;
    int y = 2;
    int z = x++ * (x + y) - y--;
    printf("z = % d\n", z);         //16
    return 0;
}

/*output
z = x++ * (x + y) - y--;
priority [(), *, -, =, x++, y--]
1.x++ => x=x+1 => 3+1 => 4 => x=4 later updeted not used in exp
2.() => (x+y) => (4+2) => 6
3.* => x*6 => 3*6 => 18
4.- => 18-2 => 16 => z=16
5.y-- => y=y-1 => 2-1 => 1 => y=1
*/
