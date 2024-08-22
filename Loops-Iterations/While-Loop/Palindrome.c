//Finding Palindrome of given number

#include<stdio.h>
void main()
{
    int n, rev=0, r, m;
    printf("\nEnter number: ");
    scanf("%d", &n);
    m = n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(m == rev)
    {
        printf("\n%d is palindrome", rev);
    }else{
        printf("\n%d is not palindrome", rev);
    }
}

/*
Enter number: 101
101 is palindrome

Enter number: 123
321 is not palindrome

Enter number: 121
121 is palindrome
*/