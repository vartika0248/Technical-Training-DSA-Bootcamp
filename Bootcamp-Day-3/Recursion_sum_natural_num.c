#include<stdio.h>
void PrintNaturalNumber(int,int);
int SumOfNaturalNumber(int n)
{
    if(n==0)
    {
        return 0;
    }
    else{
        return n+(SumOfNaturalNumber(n-1));
    }
}
void PrintNaturalNumber(int i,int n)
{
    if(i==n) {
        printf("%d",n);
    }
    else{
        printf("%d\n",i);
        PrintNaturalNumber(i+1,n);
    }
}
int main()
{
    int n;
    printf("Enter value for n:\n");
    scanf("%d",&n);
    int sum=SumOfNaturalNumber(n);
    printf("Sum of numbers till %d is %d\n",n,sum);
    int i=1;
    PrintNaturalNumber(i,n);
    return 0;
}