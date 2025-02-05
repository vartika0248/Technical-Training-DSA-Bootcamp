#include<stdio.h>
int calculateFactorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return (n*calculateFactorial(n-1));
    }
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