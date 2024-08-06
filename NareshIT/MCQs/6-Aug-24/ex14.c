//Find output of following code

#include<stdio.h>
int main() 
{ 
    int a = 5; 
    int b = 10; 
    int c = 15; 
    int result = a++ * ++b - --c; 
    printf("result = %d\n", result);        //41
    return 0; 
}

/* output
result = 41
*/

/* Output explanation
a = 5; 
b = 10; 
c = 15; 
result = a++ * ++b - --c;
1. a++ => a=a+1 => 5+1 => a=6
2. ++b => b=b+1 => 10+1 => b=11
3. --c => c=c-1 => 15-1 => c=14
4.result = a++ * ++b - --c;
            5   *  11  -    14
            55 - 14
            41

    result = 41

answer is result = 41
*/