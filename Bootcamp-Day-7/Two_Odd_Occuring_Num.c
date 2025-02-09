#include<stdio.h>
void Two_Odd_Occuring_Numbers(int arr[],int n)
{
    int x=arr[0];
    for(int i=1;i<n;i++)
    {
        x=(x^arr[i]);
    }
    int k=(x&(~(x-1)));
    int res1=0,res2=0;
    for(int j=0;j<n;j++)
    {
        if((arr[j]&k)!=0)
        {
            res1=res1^arr[j];
        }
        else{
            res2=res2^arr[j];
        }
    }
    printf("Odd Occuring Number 1:%d\n",res1);
    printf("Odd Occuring Number 2:%d\n",res2);
    x = res2^(~(res1));
    printf("Final Result=%d",x);
}
int main()
{
    int n,i;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    Two_Odd_Occuring_Numbers(arr,n);
    return 0;
}