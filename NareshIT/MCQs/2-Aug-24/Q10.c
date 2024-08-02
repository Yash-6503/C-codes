// MCQ questions

#include<stdio.h>
int main()
{
    int a = 5, b = 10, c = 15;
    int result = !(a <= b) && !(b != c) && !(c >= a);
    printf("result = % d\n", result);       //0
    return 0;
}

/* output
result = !(a <= b) && !(b != c) && !(c >= a)
priority [(), !, &&, =]
result = !(a <= b) && !(b != c) && !(c >= a)
         !(5<=10)  && !(10!=15) && !(15>=5)
         !(1)      &&   !(1)    &&  !(1)
          0        &&     0     &&    0
                    0 - false
hence, result = 0

*/