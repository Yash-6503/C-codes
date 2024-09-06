/*
5.
Write a C program to find the element given by user is present in the array or not ? 
If the element is present in the array also programmer have to print 
index position of that searching element.
If the user pass the element for searching in the array is not present
then also provide a appropriate message to the user that element is not 
present inside the array.
Sample Input
Input 1:-
[1,2,3,4,5,6,7]

Enter the number you want to search : 5


Input 2:-

[1,2,3,4,3,6]
Enter the number you want to search : 9
Sample Output
The element which you have sreached is present inside the 4rth index


Output :
The element which you have sreached is not present inside the Array.
*/

#include<stdio.h>
void main()
{
    int a[100], n, i, ele, found=0, index;
    printf("\nEnter Array Size(1-100): ");
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
        if(ele == a[i])
        {
            found=1;
            index=a[i];
        }
    }

    if(found == 0)
    {
        printf("\nThe element which you have sreached is not present inside the Array.");
    }
    else{
        printf("\nThe element which you have sreached is present inside the %d index", index-1);
    }
    
}

/*
Enter Array Size(1-100): 5

Enter 5 elements: 1 2 3 4 5

Enter element to search: 3

The element which you have sreached is present inside the 2 index
*/

/*
Enter Array Size(1-100): 5

Enter 5 elements: 1 2 3 3 4

Enter element to search: 3

The element which you have sreached is present inside the 2 index
*/