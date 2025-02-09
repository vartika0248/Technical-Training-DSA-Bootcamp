#include<stdio.h>
void productexceptionself(int arr[], int n, int arr1[])
{
    int i,right=1;
    arr1[0]=1;
    for(i=1;i<n;i++)
    {
        arr1[i]=arr1[i-1]*arr[i-1];
    }
    for(i=n-1;i>=0;i--)
    {
        arr1[i]*=right;
        right*=arr[i];
    }
}

int main()
{
    int n,i;
    printf("Enter the size of element:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element in an array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int arr1[n];
    productexceptionself(arr,n,arr1);
    printf("The new product array is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr1[i]);
    }
    
    return 0;
}