#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number:\n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Number is positive\n");
    }
    else if(n==0)
    {
        printf("Number is zero\n");
    }
    else
    {
        printf("Number is negative\n");
    }
    (n>0)?printf("Positive"):(n<0)? printf("Negative"):printf("Zero");
    return 0;
}