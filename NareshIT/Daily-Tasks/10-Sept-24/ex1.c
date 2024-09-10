/*
Que 1 : Write a program in C to insert values in the array (unsorted list).
--------
Sample input :
Input the size of array : 4
Input 4 elements in the array in ascending order:
element - 0 : 1
element - 1 : 8
element - 2 : 7
element - 3 : 10
Input the value to be inserted : 5
Input the Position, where the value to be inserted :2

Sample output :
The current list of the array :1 8 7 10
After Insert the element the new list is :1 5 8 7 10
*/

#include<stdio.h>
void main()
{
    int a[100], i, j, n, pos, ele;
    printf("\nEnter array size: ");
    scanf("%d",&n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter element to add: ");
    scanf("%d", &ele);

    printf("\nEnter position to add: ");
    scanf("%d", &pos);

    if(pos < 1 || pos > n+1)
    {
        printf("\nPlease enter pos between 1 to %d only", n+1);
    }else{

        printf("\nThe current list of the array : ");
        for(i=0; i<n; i++)
        {
            printf("%3d", a[i]);
        }

        for(i=n; i>=pos; i--)
        {
            a[i] = a[i-1];
        }
        a[i] = ele;

        printf("\nAfter Insert the element the new list is: ");
        for(i=0; i<=n; i++)
        {
            printf("%3d", a[i]);
        }
    }
}


/*
Enter array size: 4

Enter 4 elements: 1 8 7 10

Enter element to add: 5

Enter position to add: 2

The current list of the array : 1  8  7 10
After Insert the element the new list is: 1  5  8  7 10
*/

/*
Enter array size: 4

Enter 4 elements: 10 20 40 50

Enter element to add: 30

Enter position to add: 3

The current list of the array : 10 20 40 50
After Insert the element the new list is: 10 20 30 40 50
*/

/*
Enter array size: 4

Enter 4 elements: 1 2 3 4

Enter element to add: 5

Enter position to add: 6

Please enter pos between 1 to 5 only
*/