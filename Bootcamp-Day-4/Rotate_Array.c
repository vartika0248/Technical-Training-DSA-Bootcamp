#include<stdio.h>
void LeftRotateArray(int arr[],int n,int d)
{
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++)
    {
        arr[i-d]=arr[i];
    }
    for(int i=0;i<d;i++)
    {
        arr[n-d+i]=temp[i];
    }
}
int main()
{
    int n,i,pos;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter Position to rotate array:\n ");
    scanf("%d",&pos);
    printf("Original Array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    LeftRotateArray(arr,n,pos);
    printf("\nThe new array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return  0;
}