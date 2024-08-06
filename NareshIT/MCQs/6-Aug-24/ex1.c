//Find the output of this program 

#include<stdio.h> 
int main() 
{ 
    int i = 10; 
    i++; 
    i * i;
    printf("%d\n",i);       //11
    return 0; 
} 

/* output
i = 11;
*/

/* Output explanation
int i = 10; //variable dec & initialization
i++;
i*i;
here,
i++ => i=i+1 => 10+1 => i=11
i*i => 11*11 => 121
But while performing operation there is no = operator so that value will be stored
into variable.
Hence, value will be remain same. 
i = 11
*/