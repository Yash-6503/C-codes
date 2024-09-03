/*
Write a C program to reverse the elements of an array
*/

#include<stdio.h>
void main()
{
    int n, temp, a[100], i;
    printf("\nEnter Number: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n/2; i++)
    {
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
        
    }

    for(i=0; i<n; i++)
    {
        printf("%4d", a[i]);
    }
}

/*
Enter Number: 5

Enter 5 elements: 1
2
3
4
5
 
5 4 3 2 1
*/

/*
Enter Number: 5

Enter 5 elements: 40
10
30
50
20
  
20  50  30  10  40
*/