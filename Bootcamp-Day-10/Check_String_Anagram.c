#include<stdio.h>
int calculate_length(char *str)
{
    int i,len=0;
    for(i=0;str[i]!='\0';i++)
    {
       len++;
    }
    return len;
}
int main()
{
    int i,j,len1,len2,flag=1;
    char str1[10],str2[10];
    printf("Enter String 1:\n");
    scanf("%s",&str1);
    printf("Enter String 2:\n");
    scanf("%s",&str2);
    len1=calculate_length(str1);
    len2=calculate_length(str2);
    if(len1==len2)
    {
      for(i=0;i<len1;i++){
        for(j=0;j<len2;j++) {
            if(str1[i]==str2[j]){
                flag=1;
                break;
            }
            else{
                flag=0;
                continue;
            }
        }         
      }
      if(flag==1) {
                printf("String is Anagram\n");
            } 
      else{
           printf("String is not Anagram");
      }
    }
    else{
        printf("String is not Anagram\n");
    }
    return 0;
}