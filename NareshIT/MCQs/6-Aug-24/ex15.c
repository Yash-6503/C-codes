// What will be the output of the following code snippet? 

#include<stdio.h>
int main() 
{ 
    int x = 10; 
    int y = 5; 
    int z = x-- - y; 
    printf("x = %d, y = %d, z = %d\n", x, y, z); 
    return 0; 
}

/* output
x = 9
y = 5
z = 5
*/

/* output explanation
int x = 10; 
int y = 5; 
int z = x-- - y; 
1.x-- => 10-1 => 9 => x=9
2.z = x - y
      10 - 5
        5
    z=5

answer x = 9, y = 5, z = 5
*/