/*
Que 5 : Write a program in C to find the number occurring
odd number of times in an array.
--------
Sample input :
The given array is : 8 3 8 5 4 3 4 3 5 1

Sample output :
The element odd number of times is : 3 1
*/

#include <stdio.h>

int main() {
    int arr[] = {8, 3, 8, 5, 4, 3, 4, 3, 5, 1};  // Given array
    int n = sizeof(arr) / sizeof(arr[0]);  // Size of the array
    int count;

    printf("The element(s) occurring odd number of times is/are: ");

    // Iterate through the array to find odd occurrences
    for (int i = 0; i < n; i++) {
        count = 0;

        // Compare arr[i] with the rest of the array to count occurrences
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // If the count is odd and we haven't printed it yet, print the element
        if (count % 2 != 0) {
            printf("%d ", arr[i]);
            
            // To avoid printing the same element multiple times, we set arr[i] to -1 (or another invalid value)
            // after printing, but only if the element has been printed before.
            for (int k = i + 1; k < n; k++) {
                if (arr[k] == arr[i]) {
                    arr[k] = -1;
                }
            }
        }
    }

    printf("\n");
    return 0;
}


/*
The element(s) occurring odd number of times is/are: 3 1
*/