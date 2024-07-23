//Bubble Sort Algorithm

#include<stdio.h>
int main()
{
    int i, n, arr[10];
    printf("\nEnter how many elements: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    BubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}

int BubbleSort(int arr[], int n)
{
    int i, j, temp;
    for(i=0; i<n-1; i++)
    {
        int  flag = 0;
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
        {
            break;
        }
    }
}

int printArray(int arr[], int n)
{
    int i;
    printf("\nSorted Array is: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}