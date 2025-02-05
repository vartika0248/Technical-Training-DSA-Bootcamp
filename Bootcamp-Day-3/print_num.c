#include<stdio.h>
int main()
{
    int n;
    printf("Enter value for n:\n");
    scanf("%d",&n);
    int j=n; 
    for(int i=1;i<=n;i++)
    {
        printf("%d  ",j);
        j--;
    }
    return 0;
}