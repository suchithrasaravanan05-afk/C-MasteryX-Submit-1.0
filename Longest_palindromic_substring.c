#include <stdio.h>
#include <string.h>

void longestPalindrome(const char *str, char *result) {
    int len = strlen(str);
    if (len == 0) {
        result[0] = '\0';
        return;
    }

    int start = 0, maxLen = 1;

    for (int i = 0; i < len; i++) {
        int left = i, right = i;
        while (left >= 0 && right < len && str[left] == str[right]) {
            if (right - left + 1 > maxLen) {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }
        left = i;
        right = i + 1;
        while (left >= 0 && right < len && str[left] == str[right]) {
            if (right - left + 1 > maxLen) {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }
    }

    strncpy(result, str + start, maxLen);
    result[maxLen] = '\0';
}

int main() {
    char str1[] = "babad";
    char result1[100];
    longestPalindrome(str1, result1);
    printf("Input: \"%s\" -> Output: \"%s\"\n", str1, result1);

    char str2[] = "cbbd";
    char result2[100];
    longestPalindrome(str2, result2);
    printf("Input: \"%s\" -> Output: \"%s\"\n", str2, result2);

    return 0;
}
