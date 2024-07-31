//Bitwise Operator example 

#include<stdio.h>
int main()
{
    printf("All Bitwise Operator examples\n");
    printf("a = %d\n", 25 & 15);                //9
    printf("b = %d\n", 25 | 15);                //31
    printf("c = %d\n", 25 ^ 15);                //22
    printf("d = %d\n", ~25);                    //-26
    printf("e = %d\n", ~-25);                   //24
    printf("f = %d\n", 25 << 2);                //100
    printf("g = %d\n", 25 << 15);               //vs-819200  //turbo-32768
    printf("h = %d\n", 25 >> 2);                //6
    printf("i = %d\n", -25 << 2);               //-100
    return 0;
}

/*
output
a = 9
b = 31
c = 22
d = -26
e = 24
f = 100
g = 819200
h = 6
i = -100
*/

/*
output explanation 1st operation
1.25 & 15
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
            &
      0000 0000 0000 1001
                     |  |
                    2^3 2^0
                  2*2*2+1
                    8+1
                     9
Final answer => 25&15 => 9
*/

/*
output explanation 2nd operation
1.25 | 15
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
      0000 0000 0001     1      1     1      1
                   |     |      |     |      |
                  2^4   2^3    2^2   2^1    2^0
                   16  2*2*2   2*2   2*1     1
                    16   8  +   4  +  2   +  1
                               31
Final answer => 25|15 => 31
*/

/*
output explanation 3rd operation
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

/*
output explanation 4th operation
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

/*
output explanation 5th operation
1.25 << 2
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
            <<[2]
      [00]00 0000 0001 1001
    left 2 removed & 2 added to right
      0000 0000 01       1   0 0  1 0 0
                 |       |        |
                2^6     2^5      2^2
                 64  +   32   +   4   
                        100
Final answer => 25 << 2 => 100
*/

/*
output explanation 5th operation
1.25 << 15
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
            <<[15]
      [0000 0000 0001 100]1
    left 15 removed & 15 added to right
      1000 0000 0000 0000
      |
     2^15
      |  
    819200  //turbo-32768
Final answer => 25 << 15 =>  819200
*/

/*
output explanation 6th operation
1.25 >> 2
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
            >>[2]
      0000 0000 0001 10[01]
    right 2 removed & 2 added to left
      0000 0000 0000 0  1     1   0
                        |     |
                       2^2   2^1
                        4  + 2
                           6
Final answer => 25 >> 2 => 6
*/