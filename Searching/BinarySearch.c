//Binary Search Algorithm

#include<stdio.h>
int main()
{
    int n, key, arr[10], i, result;
    printf("\nEnter how many elements: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter a Key to search: ");
    scanf("%d",&key);

    result = BinarySearch(arr, n, key);

    if(result == -1)
    {
        printf("\nElement not found");
    }
    else{
        printf("\nElement found at %d position", result+1);
    }

    return 0;
}

int BinarySearch(int arr[], int n, int key)
{
    int left = 0, right = n - 1, i;
    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        for(i=0; i<n-1-i;i++)
        {
            if(arr[mid] == key)
            {
                return mid;
            }

            if(arr[mid] < key)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }
    return -1;
}