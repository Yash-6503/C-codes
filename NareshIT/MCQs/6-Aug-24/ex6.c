//Find the output of following program 

#include<stdio.h>
int main() 
{ 
    int a=-1, b=1, c, d; 
    c = !a && b;
    d = !a || b; 
    printf("%d %d %d %d",a,b,c,d); 
    return 0; 
}


/* Output
-1, 1, 0, 1
*/

/* Output explanation
a=-1, b=1, c, d; 
c = !a && b;
d = !a || b; 
We will go step by step;
1.c = !a  && b;
    !-1 && 1
    0  && 1
        0
Hence, answer is c = 0

2.d = !a || b;
      !-1 || 1
       0  || 1
          1
Hence, answer is d = 1

Final Answer is -1, 1, 0, 1
*/