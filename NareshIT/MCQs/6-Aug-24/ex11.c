// What will be the output of the following code snippet? 

#include<stdio.h>
int main() 
{ 
    int x = 3; 
    int y = 2;
    int z = x++ * (x + y) - --y; 
    printf("z = %d\n", z);
    return 0; 
}

/* output
z = 17
*/

/* Output Explanation
z = x++ * (x + y) - --y;
here we will go step by step
1.x++ => x=x+1 => 3+1 => x=4
2.--y => y=y-1 => 2-1 => y=1
3. x++ * (x + y) - --y;
    3 * (4+2) - 1;
    3 * 6 - 1
    18 - 1
    17

answer is z=17
*/