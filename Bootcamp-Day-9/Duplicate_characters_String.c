#include <stdio.h>
#include <string.h>
void findDuplicates(char str[]) {
    int len = strlen(str);
    int foundDuplicate = 0;
    printf("Duplicate characters in the string: ");
    for (int i = 0; i < len; i++) {
        if (str[i] == ' ' || str[i] == '0') {
            continue;
        }
        for (int j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
                printf("%c ", str[i]);
                str[j] = '0';  
                foundDuplicate = 1;
                break;
            }
        }
    }
    if (!foundDuplicate) {
        printf("No duplicate characters found.");
    }
    printf("\n");
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99[^\n]", str);  
    findDuplicates(str);
    return 0;
}
