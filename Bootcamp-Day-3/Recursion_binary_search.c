#include<stdio.h>
int binarySearch(int arr[],int left,int right,int key)
{
    if(left>=right){
        return -1;
    }
    int mid=(left+right)/2;
    if(arr[mid]==key){
        return 1;
    }
    else if(arr[mid]>key){
        return binarySearch(arr,left,mid-1,key);
    }
    else{
        return binarySearch(arr,mid+1,right,key);
    }
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
    int r=binarySearch(arr,0,n-1,ele);
    if(r==1)
    {
        printf("Element Found\n");
    }
    else{
        printf("Element Not Found\n");
    }
    return 0;
}