#include<stdio.h>
int calculateFactorial(int n)
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
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int f=calculateFactorial(n);
    printf("Factorial=%d\n",f);
    return 0;
}