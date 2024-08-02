//MCQ questions

#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int result = (a > b) && (b < a++) || (a++ < b);
    printf("result = % d\n", result);       //1
    return 0;
}

/*output
result = (a > b) && (b < a++) || (a++ < b);
priority [(), &&, ||, =]
1.() => (a>b) => (10 > 20) => 0 - false
here, first exp is false then it will not check next
but here, another operator is there so it will check further
2.(a++ < b);
(10++ < 20)  => 1 true
later (11 < 20) then also true
Hence, 
from 1st we get 0 false and 2nd we get 1 true
lastly here is || opr so in or opr 0 || 1 => 1 true
so, result = 1
*/