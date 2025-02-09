#include<stdio.h>
int Calculate_Sum(char *str,int len);
int calculate_length(char *str)
{
    int i,len=0;
    for(i=0;str[i]!='\0';i++)
    {
       len++;
    }
    return len;
}
int Calculate_Sum(char *str,int len)
{
    int i,sum=0;
    for(i=0;i<len;i++){
        int c= str[i];
        sum=sum+c;
    }
    return sum;
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
    int sum1= Calculate_Sum(str1,len1);
    int sum2= Calculate_Sum(str2,len2);
    if(sum1==sum2)
    {
        printf("String is Anagram\n");
    }
    else{
        printf("String is not Anagram\n");
    }
    return 0;
}