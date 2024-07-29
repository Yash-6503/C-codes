//sizeof Operator example

#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    printf("%d, %d, %d\n", sizeof(a), sizeof(b), sizeof(c));
    printf("%d, %d, %d\n", sizeof(int), sizeof(float), sizeof(char));
    return 0;
}

/* vs code output
output
4, 4, 1
4, 4, 1
*/

/*
output explanation
int a;
float b;
char c;
printf("%d, %d, %d\n", sizeof(a), sizeof(b), sizeof(c));
ans => 4, 4, 1
printf("%d, %d, %d", sizeof(int), sizeof(float), sizeof(char));
ans => 4, 4, 1
*/


/* turbo c compiler output
output
2, 4, 1
2, 4, 1
*/

/*
output explanation
int a;
float b;
char c;
printf("%d, %d, %d\n", sizeof(a), sizeof(b), sizeof(c));
ans => 2, 4, 1
printf("%d, %d, %d", sizeof(int), sizeof(float), sizeof(char));
ans => 2, 4, 1
*/