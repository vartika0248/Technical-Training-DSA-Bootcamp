#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter the sides of triangle:\n");
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1+s2>s3 || s1+s3>s2 || s2+s3>s1)
    {
        printf("Triangle is valid\n");
    }
    else{
        printf("Triangle is not valid\n");
    }
    int a1,a2,a3;
    printf("Enter the angles of triangle:\n");
    scanf("%d %d %d",&a1,&a2,&a3);
    if(a1+a2+a3==180)
    {
        printf("Triangle is valid\n");
    }
    else{
        printf("Triangle is not valid\n");
    }
    return 0;
}