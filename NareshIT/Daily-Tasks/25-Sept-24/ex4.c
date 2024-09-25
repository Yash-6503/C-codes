/*
Que 4 : Write a C program that finds the largest element in an array of integers using function.
--------

-> create int main() function.
-> create int largestEle(int arr[]) function.
-> in main function read size of array and based on size create new array.
-> store size elements into array and call largestEle function by passing array as input.
-> largestEle function will perform the operation and will return largest element of array to the main function.
-> in the main function recive the result and print the output. 

Sample input : n = 7
               arr[]={1,100,2,3,55,3,2}

Sample output : Largest element of array is : 100
*/

#include<stdio.h>
int LargestElement();

void main()
{
    int a[100], n, i;
    printf("\nEnter array size: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nLargest element of array is : %d",LargestElement(n, a));
}

int LargestElement(int n, int * a)
{
    int i, j, max=a[0], temp;
    // for(i=0; i<n-1; i++)
    // {
    //     for(j=0; j<n-i-1; j++)
    //     {
    //         if(a[j] > a[j+1])
    //         {
    //             temp = a[j];
    //             a[j] = a[j+1];
    //             a[j+1] = temp;
    //         }
    //     }
    // }

    for(i=0; i<n; i++){
        if(max < a[i])
        {
            max = a[i];
        }
    }

    return max;
}


/*
Enter array size: 7

Enter 7 elements: 1
100
2
3
55
3
2

Largest element of array is : 100
*/