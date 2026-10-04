#include <stdio.h>
#include <string.h>

char firstNonRepeatingChar(const char *str) {
    int freq[256] = {0};
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        freq[(unsigned char)str[i]]++;
    }
    for (int i = 0; i < len; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }

    return '\0'; 
}

int main() {
    char str1[] = "swiss";
    char ans1 = firstNonRepeatingChar(str1);
    if (ans1 != '\0') printf("Input: \"%s\" -> Output: \"%c\"\n", str1, ans1);
    else printf("Input: \"%s\" -> Output: -1\n", str1);

    char str2[] = "aabbcc";
    char ans2 = firstNonRepeatingChar(str2);
    if (ans2 != '\0') printf("Input: \"%s\" -> Output: \"%c\"\n", str2, ans2);
    else printf("Input: \"%s\" -> Output: -1\n", str2);

    return 0;
}
