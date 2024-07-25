//Decrement(--) Operator example

#include<stdio.h>
int main()
{
    //1st operation
    int a = 10, b;
    b = a--;    //here priority will be checked as followed [=, --] 
    printf("a = %d, b = %d", a, b);
    //2nd operation
    a = 10;
    b = --a;    //here priority will be checked as followed [--, =] 
    printf("\na = %d, b = %d", a, b);
    return 0;
}

/*
--a = this is prefix increment
a-- = this is postfix increment
*/

/*
output
a = 9, b = 10
a = 9, b = 9
*/

/*
1st operation explanation
a = 10, b
b = a--
in above first '=' will work then 'a--' will be done
b = a[10]
b = 10
a-- => 10-1 => 9
a = 9
printf("a = %d, b = %d", a, b);
a = 9, b = 10
*/

/*
2nd operation explanation
a = 10, b
b = --a
in above first '--a' will work then '=' will be done
--a => 10-1 => 9
a = 9
b = a[9]
b = 9
printf("a = %d, b = %d", a, b);
a = 9, b = 9
*/
