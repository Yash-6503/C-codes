/*
Que 3 : Write a program in C to merge two arrays of the same 
size sorted in descending order.
-------
Sample input :
Input the number of elements to be stored in the first array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3

Input the number of elements to be stored in the second array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3

Sample output :
The merged array in descending order is :3 3 2 2 1 1
*/

#include<stdio.h>
void main()
{
    int n, a[100], b[100], i, j, n1, n2, temp=0;
    printf("\nEnter 1st & 2nd array size: ");
    scanf("%d %d", &n1, &n2);
    printf("\nEnter 1st array elements: ");
    for(i=0; i<n1; i++) {
        printf("\nelement - %d : ", i); scanf("%d", &a[i]);
    }

    printf("\nEnter 2nd array elements: ");
    for(i=0; i<n2; i++) { 
        printf("\nelement - %d : ", i); scanf("%d", &b[i]);
    }

    for(i=n1, j=0; i<n1+n2; i++, j++) {a[i] = b[j]; }
    
    for(i=0; i<n1+n2; i++){
        for(j=i+1; j<n1+n2; j++){
            if(a[i] < a[j]){
                temp = a[i]; a[i] = a[j]; a[j] = temp;
            }
        }
    }

    printf("\nThe merged array in descending order is : ");
    for(i=0; i<n1+n2; i++) { printf("%2d", a[i]); }
}


/*
Enter 1st & 2nd array size: 3
3

Enter 1st array elements: 
element - 0 : 1

element - 1 : 2

element - 2 : 3

Enter 2nd array elements: 
element - 0 : 1

element - 1 : 2

element - 2 : 3

The merged array in descending order is :  3 3 2 2 1 1
*/