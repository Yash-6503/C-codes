//Logical Operators in c

#include<stdio.h>
int main()
{
    printf("%d\n", 5==5 && 1<0);      //0
    printf("%d\n", 5==5 && 1>0);      //1
    printf("%d\n", 5==1 || 1<0);      //0
    printf("%d\n", 5==5 || 1<0);      //1
    printf("%d\n", !(5==5) || 1<0);      //0
    printf("%d\n", !(!5 && !0 || !1.1));    //1
    return 0;
}

// Logical Operators are &&, ||, !
/*
&& = Logical and
|| = Logical or
! = Logical not
*/