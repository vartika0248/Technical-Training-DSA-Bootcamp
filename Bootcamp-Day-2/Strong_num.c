#include<stdio.h>
int Factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int num,count=0,sum=0,r=0,n;
    printf("Enter N:\n");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        r=n%10;
        sum = sum+ Factorial(r);
        n=n/10;
        count++;
    }

    printf("Number of digits= %d\n",count);
    if(sum==num)
    {
        printf("Strong Number\n");
    }
    else
    {
        printf("Not a Strong Number\n");
    }
    return 0;
}