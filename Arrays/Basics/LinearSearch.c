/*
Program to find element from an array using Linear search
*/

#include<stdio.h>
void main()
{
    int a[100], n, i, j, key, found=0, pos;
    printf("\nEnter array size: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &key);
    for(i=0; i<n; i++)
    {
        if(a[i] == key)
        {
            found=1;
            pos = a[i];
        }
    }
    if(found == 0)
    {
        printf("\nElement not found");
    }else{
        printf("\nElement found at %d index", pos-1);
    }
}

/*
Enter array size: 5

Enter 5 elements: 3 2 5 4 1

Enter element to search: 4

Element found at 3 index
*/

/*
Enter array size: 5

Enter 5 elements: 1 2 3 4 5

Enter element to search: 3

Element found at 2 index
*/