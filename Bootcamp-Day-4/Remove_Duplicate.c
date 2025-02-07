#include<stdio.h>
int RemoveDuplicate(int arr[],int n)
{
    int res=1,i;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
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
    printf("Original Array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    int r=RemoveDuplicate(arr,n);
    printf("\nThe array after removing duplicate element is:\n");
    for(i=0;i<r;i++)
    {
        printf("%d ",arr[i]);;
    }
    return 0;
}