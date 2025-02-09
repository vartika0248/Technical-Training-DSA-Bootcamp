#include <stdio.h>
#include <string.h>
int isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end) {
        if (str[start] == ' ') {
            start++;
        } else if (str[end] == ' ') {
            end--;
        } else if (str[start] != str[end]) {
            return 0; 
        } else {
            start++;
            end--;
        }
    }
    return 1; 
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99[^\n]", str);  
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
