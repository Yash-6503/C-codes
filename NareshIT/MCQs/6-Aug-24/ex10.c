// What will be the output of the following code snippet? 

#include<stdio.h>
int main() 
{ 
    int x = 3; 
    int y = 2;
    int z = x++ * (x + y) - y--; 
    printf("z = %d\n",z); 
    return 0; 
}

/* Output
 z = 16
*/

/* Output Explanation
x = 3; 
y = 2;
z = x++ * (x + y) - y--;
Here we will go step by step
1. x++ => x+1 => 3+1 => 4 => x=4
2. (x+y) => (4+2) => 6
3. y-- => 2-1 => 1 => y=1
4.z = x++ * (x + y) - y--;
      3   * 6  -  2
        18 - 2
           16

    z = 16

Final answer is z = 16

*/