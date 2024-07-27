//Increment (++) - Decrement (--) operator example

#include<stdio.h>
int main()
{
    int a=2, b;
    b = a++ + a++ + a++;
    printf("a=%d, b=%d\n", a, b);
    a = 2;
    b = ++a + ++a + ++a;
    printf("a=%d, b=%d\n", a, b);
    return 0;
}

/*
output of Turbo C/C++
a=5, b=6
a=5, b=15
*/

/*
output of Vscode
a=5, b=9
a=5, b=13
*/

//below output explanations are as per turbo compiler
/*
Output Explanation 1st operation
a=2
b = a++ + a++ + a++
here we will find b value first
1.a+a+a => 2+2+2=6 => b=6
now a will be incremented
2.a++ => 2+1=3 => a++ => 3+1=4 => a++ => 4+1=5 => a=5
*/

/*
Output Explanation 2nd operation
a=2
b = ++a + ++a + ++a
here first we will increment the a
1.++a => 2+1=3 => a++ => 3+1=4 => a++ => 4+1=5 => a=5
now, we will find the value of b
2.a+a+a => 5+5+5=15 => b=15
*/

//explaination as per vscode
/*
Output Explanation 1st operation
a=2
b = a++ + a++ + a++
here we will as per Left to right rule
1.First a=2
2.a=2 => later => a++ => 2+1=3 => updated a=3
3.Again same as above
4.a=3 => later => a++ => 3+1=4 => updated a=4
5.a=4 => later => a++ => 4+1=5 => updated a=5
now, we will find the b value
6.b=a+a+a => 2+3+4=9 => b=9
hence answer of 1st operation is
a=5, b=9
*/

/*
Output Explanation 2nd operation
a=2
b = ++a + ++a + ++a
here we will as per Left to right rule
1.First a=2
2.a=2 => ++a => 2+1=3 => updated a=3
3.Again same as above
4.a=3 => a++ => 3+1=4 => updated a=4
5.a=4 => a++ => 4+1=5 => updated a=5
now, we will find the b value
6.b=a+a+a => 4+4+5=13 => b=13
hence answer of 1st operation is
a=5, b=13
*/

