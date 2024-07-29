//Seperators example

#include<stdio.h>
int main()
{
    int a = (1, 2, 3);
    printf("a=%d", a);      //3
    return 0;
}

/*
output 
a = 3
*/

/*
output explanation
a = (1, 2, 3)
priority [() = ,]
1.1, 2 => 2, 3 => 3
2.a = 3
*/