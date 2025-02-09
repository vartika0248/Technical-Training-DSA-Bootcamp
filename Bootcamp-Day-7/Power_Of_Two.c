#include<stdio.h>
int IsPowerOfTwo(int n)
{
    return ((n>0) && (n&(n-1))==0);
}
int main()
{
    int n;
    printf("Enter any number:\n");
    scanf("%d",&n);
    if(IsPowerOfTwo(n))
    {
        printf("%d is a power of two\n",n);
    }
    else{
        printf("%d is not a power of two\n",n);
    }
    return 0;
}