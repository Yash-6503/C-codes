// Find the output of the given C program. 

#include<stdio.h>
int main() 
{ 
    printf("%d Hello %d"); 
    return 0; 
}

/* output
Garbage Hello Garbage
-79028872 Hello -79028856
*/

/* output explanation
here %d contains Garbage value so output will be
Garbage Hello Garbage
-79028872 Hello -79028856
*/