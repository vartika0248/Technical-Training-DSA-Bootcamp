#include<stdio.h>
void FindLeaders(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<=arr[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d, ",arr[i]);
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
    FindLeaders(arr,n);
    return 0;

}