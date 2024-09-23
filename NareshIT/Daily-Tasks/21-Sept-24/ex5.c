/*
5 : Write a C program to input elements in array and 
search an element in array using pointers. 
--------

Sample input : {10, 20, 30, 40, 50, 60, 70}

Input element to search: 25

Sample output :

25 does not exists in array
*/

#include<stdio.h>
void main()
{
    int i, c=0, n, a[100], *p, ele;
    printf("\nEnter array size: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    p=a;
    printf("\nEnter element to search: ");
    scanf("%d", &ele);
    for(i=0; i<n; i++)
    {
        if(p[i] == ele)
        {
            c=1;
            break;
        }
    }
    if(c!=0){
        printf("\n%d exists in the array", ele);
    }else{
        printf("\n%d does not exists in the array", ele);
    }
}

/*
Enter array size: 7

Enter 7 elements: 10
20
30
40
50
60
70

Enter element to search: 25

25 does not exists in the array
*/

/*
Enter array size: 5

Enter 5 elements: 1
2
3
4
5

Enter element to search: 4

4 exists in the array
*/