//Find the Output of following program 

#include<stdio.h>
int main() 
{ 
    int x, y, z; 
    x = 9 > 8 > 7; 
    y = 9 > 8 > 0; 
    z = 9 > 8 > 1; 
    printf("%d %d %d", x, y, z); 
    return 0; 
}

/* output
0 1 0
*/

/* output explanation
x = 9 > 8 > 7; 
y = 9 > 8 > 0; 
z = 9 > 8 > 1; 
here, we will go step by step
1. x = 9 > 8 > 7
         1   > 7
            0
    x = 0

2. y = 9 > 8 > 0
        1   >  0
            1
    y = 1

3. z = 9 > 8 > 1
         1  >  1
            0
    z = 0

Final answer is 0 1 0
*/