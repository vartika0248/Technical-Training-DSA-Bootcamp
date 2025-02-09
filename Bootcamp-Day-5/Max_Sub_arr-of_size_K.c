#include<stdio.h>
int max(int,int);
int min(int,int);
int MinimumSubarraySum(int arr[],int n,int k);
int MaximumSubarraySum(int arr[],int n,int k)
{
    int res=arr[0],curr;
    for(int i=0;i<n;i++)
    {
        curr=0;
        for(int j=0;j<k;j++)
        {
            curr=curr+arr[j];
            res= max(res,curr);
        }
    }
    return res;
}
int max(int a,int b)
{
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int MinimumSubarraySum(int arr[],int n,int k)
{
    int res=arr[0],curr;
    for(int i=0;i<n;i++)
    {
        curr=0;
        for(int j=i;j<k;j++)
        {
            curr=curr+arr[j];
            res= min(res,curr);
        }
    }
    return res;
}
int min(int a,int b)
{
    if(a<b)
       return a;
    else
       return b;
}
int main()
{
    int n,i,k;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter Size for sub-array:\n");
    scanf("%d",&k);
    int r=MaximumSubarraySum(arr,n,k);
    printf("\nMaximum Subarray Sum of %d(k) elements : %d ",k,r);
    int r1=MinimumSubarraySum(arr,n,k);
    printf("\nMinimum Subarray Sum of %d(k) elements : %d ",k,r1);
    return 0;
}