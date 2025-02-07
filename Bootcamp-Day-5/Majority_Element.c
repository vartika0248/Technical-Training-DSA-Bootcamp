#include<stdio.h>
int MajorityElement(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int count=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
              count++;
        }
        if(count>n/2)
        {
            printf("Count=%d\n",count);
            return arr[i];
        }
    }
    return -1;
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
    int r=MajorityElement(arr,n);
    printf("Majority Element in array is: %d ",r);
    if(r==-1){
        printf("(-1 means no majority element)");
    }
    return 0;
    
}