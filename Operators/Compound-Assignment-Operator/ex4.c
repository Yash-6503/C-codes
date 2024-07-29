//Compound Assignment Operator example

#include<stdio.h>
int main()
{
    int a=4;
    a*=a+=printf("%d ", printf("Kahona Pyar hai"));
    printf(" %d", a);
    return 0;
}

/*
output
Kahona Pyar hai 1536
*/

/*
output explanation of turbo c compiler
a=4
a *= a += printf("%d ", printf("Kahona Pyar hai"))
Here, by observing above exp first printf statement will work
1.Kahona Pyar hai => 1st printf
2.15 => 2nd printf
Here, 15 is of 2 digits then a=2 will considered further
3.a = a + 2
  a = 4 + 2
  a = 6
4.a = a * a
  a = 6 * 6
  a = 36
*/

/*
output explanation of online or vscode compiler
a=4
a *= a += printf("%d ", printf("Kahona Pyar hai"))
Here, by observing above exp first printf statement will work
1.Kahona Pyar hai => 1st printf
2.15 => 2nd printf
Here, 15 is of a=3 will considered further
3.a = a + 3
  a = 4 + 3
  a = 7
4.a = a * a
  a = 7 * 7
  a = 49
*/