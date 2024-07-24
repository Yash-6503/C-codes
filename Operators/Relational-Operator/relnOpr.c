//Relational Operators
#include<stdio.h>
int main()
{
    printf("%d", 5 == 5);           //1
    printf("\n%d", 5+5/2==10);      //0
    printf("\n%d", (5+5)/2==5);     //1
    printf("\n%d", 5+5/2!=5);     //1
    printf("\n%d", "a" == "a");       //0 in Turbo C++ but 1 in Vscode
    printf("\n%d", 'a' == 97);      //1 ASCII value of a is 97
    printf("\n");
    return 0;
}

//Relational Operators are ==(comparison), <=, =>, <, >, !=(not equal);
/*They are used to check the given condition or expression is
true or false. If condition is true always it return 1 and false it
return 0.*/