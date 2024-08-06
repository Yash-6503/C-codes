//What will be the output of following program

#include<stdio.h>
int main() 
{ 
    int a; 
    a = (1, 2, 3); 
    printf("%d", b);
    return 0; 
}

/* Ouput
Compilation Error
*/

/* Output Explanation
Compilation error occurs because of b is not defined

error: ‘b’ undeclared (first use in this function)
    8 |     printf("%d", b);
      |                  ^
*/