#include <stdio.h>

int reverseRecursive(int num, int rev) {
    // Base case: number is reduced to 0
    if (num == 0) {
        return rev;
    }
    return reverseRecursive(num / 10, rev * 10 + (num % 10));
}

int reverseInteger(int num) {
    return reverseRecursive(num, 0);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int reversedNum = reverseInteger(num);
        printf("Reversed number: %d\n", reversedNum);
    }

    return 0;
}
