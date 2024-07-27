//example

#include<stdio.h>
int main()
{
    int a = -1;
    printf("%d\n", a++, ++a, a=10);   //11
    printf("%d\n", a--, --a, a=5);      //4
    printf("%d\n", ++a, a=printf("Hello Yash"));      //Hello Yash11
    return 0;
}

/*
Output
11
4
Hello Yash11
*/