//Find n prime numbers by taking input from user

#include<stdio.h>
void main()
{
    int n, c=0, r;
    printf("\nEnter Number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    printf(c==2 ? "Prime number" : "Not Prime");
}

/*
Enter Number: 5
Prime number

Enter Number: 2
Prime number

Enter Number: 6
Not Prime
*/