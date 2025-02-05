#include<stdio.h>
int Fibonacci(int n)
{
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return (Fibonacci(n-1)+Fibonacci(n-2));
    }
}
int main()
{
    int n,i;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int n1=0,n2=1;
    printf("Fibonacci Series with %d terms:\n",n);
    printf("%d %d ",n1,n2);
    for(i=2;i<n;i++) {
    printf("%d ",Fibonacci(i));
    }
    printf("\n%dth(n) term of the series is %d",n,Fibonacci(i-1));
    return 0;
}