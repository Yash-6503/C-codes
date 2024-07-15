//Write a C Program to Find the Largest Element in an Array

#include <stdio.h>

int main() {
    int arr[] = {10, 5, 23, 17, 8, 14}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int largest = arr[0]; 

    for (int i = 1; i < n; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The largest element in the array is: %d\n", largest);
    return 0;
}
