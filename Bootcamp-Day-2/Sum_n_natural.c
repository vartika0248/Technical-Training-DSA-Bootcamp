#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter value for n:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("Sum of natural number till %d:  %d\n",n,sum);
    return 0;
}