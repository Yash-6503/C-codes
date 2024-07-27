//Increment (++) - Decrement (--) operator example

#include<stdio.h>
int main()
{
    int a=2;
    a = a++ + ++a;      //op1
    printf("%d\n", a);      //6
    a=2;
    printf("%d\n", a++ + ++a);      //op2
    // a=2;
    // printf("%d, %d\n", a++ + ++a, ++a + a++);       //op3
    return 0;
}

/* as per vscode output
output
a=6
*/

/* as per turbo c/c++ output
output
a=7
*/

/* as per vscode output
Output explanation of 1st operation
a=2
a = a++ + ++a
here, 
1.a = 2
2.a++ => 2+1=3 => a=3
3.++a => 3+1=4 => a=4
4.a=a+a => 2+4=6 => a=6
hence, a=6
*/

/*as per turbo compiler output
a=2
a=a++ + ++a
priority [++a, +, =, a++]
1.++a => 2+1=3 => a=3
2.a=a+a => 3+3=6 => a=6
3.a++ => 6+1=7 => a=7
hence, a=7
*/

/* output as per vs code
Output explanation of 2nd operation
a=2
printf("%d\n", a++ + ++a)
here in printf priority will not be checked we will go directly L->R
1.a=2
1.a++ => later => 2+1=3 => a=3
this a=3 value will not be considered at last calculations because it is updated later
2.++a => 3+1=4 => a=4
Now, last calculation
3.a=a+a => 2+4=6 => a=6  
hence, answer is a=6   
*/