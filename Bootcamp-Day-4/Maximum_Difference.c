#include<stdio.h>
int max(int a,int b);
int MaximumDifference(int arr[],int n)
{
    int i,j;
    int res=arr[1]-arr[0];
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            res=max(res,arr[j]-arr[i]);
        }
    }
    return res;
}
int max(int a,int b)
{
    if(a>=b)
    {
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
    int r = MaximumDifference(arr,n);
    printf("Maximum Difference is %d\n",r);
    return 0;
}