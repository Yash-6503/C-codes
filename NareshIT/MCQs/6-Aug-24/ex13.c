// What will be the output of the following code snippet?

#include<stdio.h>
int main() 
{ 
    int a = 10; 
    int b = 20; 
    int result = (a > b) && (b < a++) || (a++ < b);
    printf("result = %d\n", result); 
    return 0; 
}


/* Output 
result = 1
*/

/* Output explanation
a = 10; 
b = 20; 
Now, we will go step by step
result = (a > b) && (b < a++) || (a++ < b);
         (10>20)
            0       ||      (11 < 20)
            0       ||          1
                     1
        result = 1

answer is result = 1
*/