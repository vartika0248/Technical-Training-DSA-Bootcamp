#include<stdio.h>
void SumEqualPairs(int arr[],int n,int l,int h,int S)
{
    int i=0;
    while(l<n)
    {
        if(arr[l]+arr[h]>S)
        {
            h--;
        }
        else if(arr[l]+arr[h]<S)
        {
            l++;
        }
        else{
            printf("%d and %d\n",arr[l],arr[h]);
            l++;
            h--;
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
    int sum;
    printf("Enter sum to find pairs:\n");
    scanf("%d",&sum);
    SumEqualPairs(arr,n,0,n-1,sum);
    return 0;
}