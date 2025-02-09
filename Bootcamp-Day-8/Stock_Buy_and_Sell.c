#include<stdio.h>
int maxProfit(int price[],int n)
{
    int profit=0,i;
    for(i=1;i<n;i++)
    {
        if(price[i]>price[i-1])
        {
            profit+=(price[i]-price[i-1]);
        }
    }
    return profit;
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
    int r=maxProfit(arr,n);
    printf("Profit from stocks: %d ",r);
    return 0;
}