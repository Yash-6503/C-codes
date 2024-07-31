//Bitwise ~ - [Compliment] Operator example

#include<stdio.h>
int main()
{
    printf("~ [Compliment] Operator\n");
    printf("a = %d\n", ~25);            //-26
    return 0;
}

/*
a = -26
*/

/*
Note:
If the given number is in +ve then output will be -ve
simultaneously when no. is -ve then output will be +ve.
*/

/*
output explanation
1. ~25
find the byte code of 25
To find byte code divide a no. by 2
=> 25 byte code operation
1. 25 / 2 => Quotient=12 => remainder=1
2. 12 / 2 => Quotient=6 => remainder=0
3. 6 / 2 => Quotient=3 => remainder=0
4. 3 / 2 => Quotient=1 => remainder=1
4. 1 / 2 => Quotient=0 => remainder=1
answer => 11001 => 25 = 0000 0000 0001 1001

Now, we have the byte codes now we will perform final opeartion
25 => 0000 0000 0001 1001
            |
      1111 1111 1110     0      1     1      0
                  |             |     |      
                 2^5           2^2   2^1    
                  32           2*2   2*1     
                 -32    +       4  +  2  
                        -32 + 6
                          -26
Final answer => ~25 => -26
*/