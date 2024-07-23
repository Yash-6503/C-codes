//Examples of Explicit type casting
#include<stdio.h>
int main()
{
    printf("%d\n",5/2);             //2     Explicit Type casting
    printf("%f\n",(float) 5/2);     //2.500000  Explicit Type casting
    printf("%f\n", (float) 5.0/2);      //2.500000
    printf("%d\n", (int) 5.0/2);        //2
    printf("%f\n", 5/(float)2.0);       //2.500000
    return 0;
}