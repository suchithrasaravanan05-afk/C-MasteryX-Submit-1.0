#include <stdio.h>

int countDigitOccurrences(int num, int digit) {
    // Base case: no more digits left
    if (num == 0) {
        return 0;
    }

    int count = (num % 10 == digit) ? 1 : 0;

    return count + countDigitOccurrences(num / 10, digit);
}

int main() {
    int num, digit;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Enter the digit to count (0-9): ");
    scanf("%d", &digit);

    if (num <= 0 || digit < 0 || digit > 9) {
        printf("Invalid input. Provide a positive integer and a single digit.\n");
    } else {
        int count = countDigitOccurrences(num, digit);
        printf("The digit %d occurs %d time(s) in %d.\n", digit, count, num);
    }

    return 0;
}
