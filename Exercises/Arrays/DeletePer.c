/*
Write a Program to delete element permanently 
from an array.
*/

#include<stdio.h>
void main()
{
    int a[100], n, i, j, f=0, ele;
    printf("\nEnter array size: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter element to delete from array: ");
    scanf("%d", &ele);

    for(i=0; i<n; i++)    
    {
       if(a[i] == ele)
       {
            for(j=i, f=1, n--; j<n; j++)
            {
                a[j] = a[j+1];
            }
            i--;
       }
    }
    

    if(f==0)
    {
        printf("\nElement %d not found.", ele);
    }
    else{
        printf("\nArray is: ");
        for(i=0; i<n; i++)
        {
            printf("%2d", a[i]);
        }
    }
    
}

/*
Enter array size: 5

Enter 5 elements: 1
2
3
4
5

Enter element to delete from array: 5

Array is:  1 2 3 4
*/

/*
Enter array size: 5

Enter 5 elements: 1
2
3
4
5

Enter element to delete from array: 6

6 element not found.
*/