// What will be the output of the following code snippet?

#include<stdio.h>
int main() 
{ 
    int a = 5, b = 10, c = 15; 
    int result = !(a <= b) && !(b != c) && !(c >= a);
    printf("result = %d\n", result);
    return 0; 
}

/* output
result = 0;
*/

/* Output explanation
a = 5, b = 10, c = 15; 
result = !(a <= b) && !(b != c) && !(c >= a)
here we will go step by step
1.!(a <= b)  && !(b != c) && !(c >= a)
  !(5 <= 10) && !(10 != 15)
  !(1)       
  0
result = 0;

final answer is result = 0;
*/