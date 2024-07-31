//Bitwise ^ - [XOR] Operator example

#include<stdio.h>
int main()
{
    printf("^ [XOR] Operator example\n");
    printf("a = %d\n", 25 ^ 15);                //22
    return 0;
}

/*
a = 22
*/

/*
output explanation
1.25 ^ 15
find the byte code of 25 and 15
To find byte code divide a no. by 2
=> 25 byte code operation
1. 25 / 2 => Quotient=12 => remainder=1
2. 12 / 2 => Quotient=6 => remainder=0
3. 6 / 2 => Quotient=3 => remainder=0
4. 3 / 2 => Quotient=1 => remainder=1
4. 1 / 2 => Quotient=0 => remainder=1
answer => 11001 => 25 = 0000 0000 0001 1001

=> 15 byte code operation
1. 15/2 => Quotient=7 => remainder=1
2. 7/2 => Quotient=3 => remainder=1
3. 3/2 => Quotient=1 => remainder=1
4. 1/2 => Quotient=0 => remainder=1
answer => 1111 => 15 = 0000 0000 0000 1111

Now, we have the byte codes now we will perform final opeartion
25 => 0000 0000 0001 1001
15 => 0000 0000 0000 1111
            |
      0000 0000 0001     0      1     1      0
                   |            |     |      
                  2^4          2^2   2^1    
                   16          2*2   2*1     
                    16    +     4  +  2  
                            22
Final answer => 25^15 => 22
*/

