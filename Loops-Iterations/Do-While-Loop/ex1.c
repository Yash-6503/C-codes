//Do While Loop example

#include<stdio.h>
void main()
{
    int n, i=1;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    do
    {
        printf("\n%d", i++);
    }while(i<=n);
}

/*
Enter a number: 5

1
2
3
4
5
*/