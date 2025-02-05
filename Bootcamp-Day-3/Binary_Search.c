#include<stdio.h>
int binarySearch(int arr[],int ele,int length)
{
    int low=0;
    int high=length-1;
    int mid;
    while(low<=high)
    {
       mid=(low+high)/2;
       if(arr[mid]==ele){
        return 1;
       }
       else if(arr[mid]>ele){
        high=mid-1;
       }
       else{
        low=mid+1;
       }
    }
    return -1;
}
int main()
{
    int n,ele,i;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array in ascending or decending order:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter value to be search:\n");
    scanf("%d",&ele);
    int r=binarySearch(arr,ele,n);
    if(r==1)
    {
        printf("Element Found\n");
    }
    else{
        printf("Element Not Found\n");
    }
    return 0;
}