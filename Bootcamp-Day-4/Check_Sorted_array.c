#include<stdio.h>
int CheckSortedArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
           return -1;
        }
    }
    return 1;
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
    int r=CheckSortedArray(arr,n);
    if(r==1)
    {
        printf("Array is sorted\n");
    }
    else{
        printf("Array is not sorted\n");
    }
    return 0;
}