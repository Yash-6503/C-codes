/*
Write a C program to find Max & Min element from array
take input from user
*/

#include<stdio.h>
void main()
{
    int a[10], n, i, min, max;
    min=a[0];
    max=0;
    printf("\nEnter how many elements: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i<n; i++)
    {
        if(max<a[i])
            max=a[i];

        if(min>a[i])
            min=a[i];
    }
    printf("\nMax = %d", max);
    printf("\nMin = %d", min);
}

/*
Enter how many elements: 5

Enter 5 elements: 30
10
50
20
40

Max = 50
Min = 10
*/