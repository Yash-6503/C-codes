/*
Accessing array elements internaly & externaly.
by using scanf and direct initialization
*/

#include<stdio.h>
void main()
{
    int a[5], n;
    // int a[5] = {1, 2, 3, 4, 5};     //directly initializing values/elements to array
    // for(int i=0; i<4; i++)       //Accessing array elements without using scanf
    //     printf("%d ", a[i]);
    printf("\nEnter array size: ");
    scanf("%d", &n);
    printf("\nEnter %d array elements: ", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}

/*
1 2 3 4
*/

/*
Enter array size: 5

Enter 5 array elements: 10
20
30
40
50
10 20 30 40 50
*/