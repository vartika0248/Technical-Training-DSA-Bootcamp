#include<stdio.h>
#include<string.h>
#include<math.h>
void ReverseString(char str[],int start,int end)
{
    if(start>=end)
    {
      return;
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    ReverseString(str,start+1,end-1);
}
int isPalindrome(char str[], int start, int end)
 {
    if (start >= end) {
        return 1; 
    }
    if (str[start] != str[end]) {
        return 0; 
    }
    return isPalindrome(str, start + 1, end - 1);
}
int main()
{
    char str[20];
    printf("Enter a string:\n");
    scanf("%s",&str);
    int len=strlen(str);
    ReverseString(str,0,len-1);
    printf("Reversed String is %s\n",str);

    if (isPalindrome(str, 0, len - 1)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}