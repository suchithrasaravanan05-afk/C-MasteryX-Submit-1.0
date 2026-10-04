#include <stdio.h>
#include <string.h>

void removeDuplicates(const char *str, char *result) {
    int visited[256] = {0}; 
    int len = strlen(str);
    int j = 0;

    for (int i = 0; i < len; i++) {
        unsigned char ch = (unsigned char)str[i];
        if (!visited[ch]) {
            visited[ch] = 1;
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
}

int main() {
    char str1[] = "programming";
    char result1[100];
    removeDuplicates(str1, result1);
    printf("Input: \"%s\" -> Output: \"%s\"\n", str1, result1);

    char str2[] = "banana";
    char result2[100];
    removeDuplicates(str2, result2);
    printf("Input: \"%s\" -> Output: \"%s\"\n", str2, result2);

    return 0;
}
