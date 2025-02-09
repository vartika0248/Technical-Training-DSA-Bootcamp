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
    int i,j,len1,len2,flag=1,sum1=0,sum2=0;
    char str1[10],str2[10];
    printf("Enter String 1:\n");
    scanf("%s",&str1);
    printf("Enter String 2:\n");
    scanf("%s",&str2);
    len1=calculate_length(str1);
    len2=calculate_length(str2);
    int arr1[26],arr2[26];
    for(i=0;i<26;i++){
        arr1[i]=0;
        arr2[i]=0;
    }
    for(i=0;i<len1;i++)
    {
        int r1= str1[i] - 'a';
        arr1[r1]=1;
    }
    for(i=0;i<len2;i++)
    {
        int r2= str2[i]- 'a';
        arr2[r2]= 1;
    }
    for(i=0;i<26;i++)
    {
        if(arr1[i]!=arr2[i])
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("String is Anagram\n");
    }
    else{
        printf("String is not Anagram\n");
    }
    return 0;
}
