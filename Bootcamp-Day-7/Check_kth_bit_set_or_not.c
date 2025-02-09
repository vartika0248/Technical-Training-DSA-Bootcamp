#include<stdio.h>
int CheckKthBitIsSet(int n,int k)
{
    int x=(n>>(k-1));
    printf("n=%d\n",n);
    if((n&1)!=0)
       return 1;
    else
       return 0;
    //if(n&(1<<k))
}
int main()
{
    int n,k;
    printf("Enter any binary number:\n");
    scanf("%d",&n);
    printf("Enter value for k:\n");
    scanf("%d",&k);
    if(CheckKthBitIsSet(n,k))
    {
        printf("%dth Bit is Set\n",k);
    }
    else{
        printf("%dth Bit is not Set\n",k);
    }
    return 0;
}