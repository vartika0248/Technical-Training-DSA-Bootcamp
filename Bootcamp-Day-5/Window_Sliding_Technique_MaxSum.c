#include<stdio.h>
int max(int a,int b);
int Maximum_Sum(int arr[],int n,int K)
{
    int curr=0;
    for(int i=0;i<K;i++)
    {
        curr+=arr[i];
    }
    int res=curr;
    for(int i=K;i<n;i++)
    {
        curr=curr+arr[i]-arr[i-K];
        res=max(res,curr);
    }
    return res;
}
int max(int a,int b)
{
    if(a>=b)
       return a;
    else  
       return b; 
}
int main()
{
    int n,i,k;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter value for k:\n");
    scanf("%d",&k);
    int r= Maximum_Sum(arr,n,k);
    printf("Maximum Subarray Sum: %d\n",r);
    return 0;

}