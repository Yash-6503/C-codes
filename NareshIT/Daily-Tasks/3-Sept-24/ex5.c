/*
Que 5 : Write C program to given pattern.
--------

1
3   2
6   5   4
10  9   8   7
*/

#include <stdio.h>

int main() {
    int n = 4;  // Number of rows
    int num = 1;  // Variable to store numbers

    // Loop for each row
    for (int i = 1; i <= n; i++) {
        int start = num;  // Store the starting number for the current row

        // Calculate the numbers in reverse order for the row
        for (int j = 1; j <= i; j++) {
            printf("%d\t", start--);
            num++;
        }
        printf("\n");  // Move to the next line after each row
    }
    
    return 0;
}


/*
   1
   2   1
   4   3   2
   7   6   5   4
*/