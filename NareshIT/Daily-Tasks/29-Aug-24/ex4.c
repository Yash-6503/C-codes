/*
2.
Write a program in C to check whether a number can 
be expressed as the sum of two prime. 

Sample Input
Input as: 16
Sample Output
Output :

16 = 3 + 13

16 = 5 + 11
*/

#include <stdio.h>

int main() {
    int n, i, j, isPrime1, isPrime2;

    // Input from the user
    printf("Input a number: ");
    scanf("%d", &n);

    printf("Output:\n");
    
    // Loop through all possible pairs of numbers (i, n-i)
    for (i = 2; i <= n / 2; i++) {
        // Check if 'i' is prime
        isPrime1 = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime1 = 0;
                break;
            }
        }

        // Check if 'n - i' is prime
        isPrime2 = 1;
        for (j = 2; j * j <= (n - i); j++) {
            if ((n - i) % j == 0) {
                isPrime2 = 0;
                break;
            }
        }

        // If both are prime, print the pair
        if (isPrime1 && isPrime2) {
            printf("%d = %d + %d\n", n, i, n - i);
        }
    }

    return 0;
}

/*
Input a number: 16
Output:
16 = 3 + 13
16 = 5 + 11
*/