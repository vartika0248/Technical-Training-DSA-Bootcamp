#include<stdio.h>
int max(int,int);
int MaximumSubarraySum(int arr[],int n)
{
    int max_Sum=-99999;
    int curr_Sum=0,i;
    for(int i=0;i<n-1;i++)
    {
        curr_Sum+=arr[i];
        if(curr_Sum>max_Sum)
        {
            max_Sum=curr_Sum;
        }
        if(curr_Sum<0)
        {
            curr_Sum=0;
        }
    }
    return max_Sum;
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
int main()
{
    int n,i;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int r=MaximumSubarraySum(arr,n);
    printf("Maximum Subarray Sum : %d ",r);
    return 0;
}