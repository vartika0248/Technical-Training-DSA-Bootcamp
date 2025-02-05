#include<stdio.h>
int main()
{
    int num,count=0,sum=0,r,rev=0,n,arm=0;
    printf("Enter N:\n");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        r=n%10;
        rev=(rev*10)+r;
        sum=sum+r;
        n=n/10;
        arm=arm+(r*r*r);
        count++;
    }
    printf("Sum= %d\n",sum);
    printf("Number of digits= %d\n",count);
    printf("Reverse= %d\n",rev);
    if(num==rev)
    {
        printf("Number is Palindrome\n");
    }
    else
    {
        printf("Number is not Palindrome\n");
    }
    if(num==arm)
    {
        printf("Number is Armstrong\n");
    }
    else
    {
        printf("Number is not Armstrong\n");
    }

    return 0;
}