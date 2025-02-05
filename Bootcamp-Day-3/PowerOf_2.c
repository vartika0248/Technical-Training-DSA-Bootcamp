#include<stdio.h>
int main()
{
    int n ,r=1,flag=0;
    printf("Enter any number:\n");
    scanf("%d",n);
    for(int i=1;i<n;i++)
    {
        r=r*2;
    }
    printf("%dth power of 2 is %d",n,r);
    return 0;
}