//For Loop Example

#include<stdio.h>
void main()
{
    int n, i;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("\n%d", i);
    }
}

/*
Enter a number: 5

1
2
3
4
5
*/