/*
Question: Write a c program to convert the small letter 
to Capital letter

sample input: t
sample Output: T
*/

#include<stdio.h>
void main()
{
    char ch, convert;
    printf("\nEnter a char: ");
    scanf("%c", &ch);
    convert = ch - 32;
    printf("\nConversion of %c is %c", ch, convert);
}

/*
Enter a char: t
Conversion of t is T

Enter a char: a
Conversion of a is A
*/