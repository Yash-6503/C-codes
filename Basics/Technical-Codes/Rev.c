#include <stdio.h>

int main() {
    int num, reversedNum;

    // Accept a 3-digit number from the user
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    // Check if the number is indeed a 3-digit number
    if(num < 100 || num > 999) {
        printf("Please enter a valid 3-digit number.\n");
        return 1;
    }

    // Reverse the 3-digit number
    reversedNum = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);
                
    // Print the reversed number
    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
