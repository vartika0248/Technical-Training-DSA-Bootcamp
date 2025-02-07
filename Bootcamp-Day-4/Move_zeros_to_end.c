#include<stdio.h>
void MoveZerosToEnd(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            int temp;
            temp=arr[i];
            arr[i]=arr[count];
            arr[count]=temp;
            count++;
        }
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
    MoveZerosToEnd(arr,n);
    printf("\nThe New array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;

}