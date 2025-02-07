#include<stdio.h>
int max(int ,int);
int MaxConsecutiveOnes(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=i;j<n;j++)
        {
            if(arr[j]==1){
               count++;
            }
            else{
                break;
            }
        }
        res=max(res,count);
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
    int r=MaxConsecutiveOnes(arr,n);
    printf("Number of Maximum Consecutive Ones: %d ",r);
    return 0;
}
