#include<stdio.h>
int min(int,int);
int max(int,int);
int getWater(int arr[],int n)
{
    int res=0,i;
    int lmax[n],rmax[n];
    lmax[0]=arr[0];
    for(i=1;i<n;i++)
    {
        lmax[i]=max(arr[i],lmax[i-1]);
    }
    rmax[n-1]=arr[n-1];
    for(i=n-2;i>=0;i--)
    {
        rmax[i]=max(arr[i],rmax[i+1]);
    }
    for(i=1;i<n-1;i++)
    {
        res=res+(min(lmax[i],rmax[i])-arr[i]);
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
int min(int a,int b)
{
    if(a<=b)
       return a;
    else
       return b;
}
int main()
{
    int n,i;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int r= getWater(arr,n);
    printf("Unit of water that can be stored is %d ",r);
    return 0;
}