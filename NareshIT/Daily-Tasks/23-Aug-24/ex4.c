/*
4.
Write a C prgram that asks the user to input an integer and reverse
 that number and display the reverse of that given number.

Case-1
-------
Input as : 
Enter a number : 123

Output as : 
Reverse of the given number is : 321

Case -2
________
Input as :
Enter a number : 2314

Output as : 
Reverse of the given number is : 4132
*/

#include<stdio.h>
void main()
{
    int n, r;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    if(n<0)
    {
        printf("-", n=-n);
    }
    do
    {
        r=n%10;
        printf("%d", r);
        n=n/10;
    }while(n);
}

/*
Enter a number: 123
321

Enter a number: 2314
4132

Enter a number: -123
-321

Enter a number: -1000
-0001

Enter a number: 0
0
*/