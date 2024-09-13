/*
Program to find an element using Linear Search.
*/

#include<stdio.h>
void main()
{
    int a[100], n, i, j, ele, found=0;
    printf("\nEnter array size: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &ele);

    for(i=0; i<n; i++)
    {
        if(a[i] == ele)
        {
            found = 1;
        }
        if(found == 1){
            printf("\nElement found at %d position", i+1);
            break;
        }
    }
    if(found == 0){
        printf("\nElement not found");
    }
}

/*
Enter array size: 5

Enter 5 elements: 1
2
3
4
5

Enter element to search: 3

Element found at 3 position
*/

/*
Enter array size: 5

Enter 5 elements: 1
2
3
4
5

Enter element to search: 6

Element not found
*/