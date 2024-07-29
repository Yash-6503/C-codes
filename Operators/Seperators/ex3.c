//Seperators example

#include<stdio.h>
int main()
{
    int a;
    a = ((1,2), (3, 4), 5, 6), 7;
    printf("a=%d\n", a);
    return 0;
}

/*
output
a = 6
*/

/*
output explanation
a = ((1,2), (3, 4), 5, 6), 7;
priority [() = ,]
1.(1,2) => 2
2.(2, 5, 6) => 6
3. a = 6 ,
comma will seperate 
*/