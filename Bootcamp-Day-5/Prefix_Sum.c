#include<stdio.h>
int GetPrefixSum(int arr[],int n,int l,int r)
{
    int res=0;
    for(int i=l;i<=r;i++)
    {
        res+=arr[i];
    }
    return res;
}
int main()
{
    int n,i,l,r;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter value for l:\n");
    scanf("%d",&l);
    printf("Enter value for r:\n");
    scanf("%d",&r);
    int ans= GetPrefixSum(arr,n,l,r);
    printf("The result is : %d ",ans);
    return 0;
}