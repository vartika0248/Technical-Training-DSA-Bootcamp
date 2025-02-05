#include<stdio.h>
int PowerOfTwo(int n)
{
    if(n==0){
        return 1;
    }
    return 2*PowerOfTwo(n-1);
}
int main()
{
    int n;
    printf("Enter any number:\n");
    scanf("%d",&n);
    int r=PowerOfTwo(n);
    printf("%dth power of 2 is %d",n,r);
    return 0;
}