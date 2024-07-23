//Assignment Operator Example

#include<stdio.h>
#include<string.h>
int main()
{
    int a;              //variable Decelaration 
    a = 10 + 20;        //variable initialization with '=' assignment operator
    char name[10];      
    strcpy(name, "Yash");
    printf("\na = %d", a);
    printf("\nname = %s", name);
    return 0;
}