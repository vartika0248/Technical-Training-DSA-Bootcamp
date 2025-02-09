#include<stdio.h>
void Intersection(int arr1[],int arr2[],int n,int m);
void Union(int arr1[],int arr2[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        {
            printf("%d ",arr1[i]);
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            printf("%d ",arr2[j]);
            j++;
        }
        else{
            printf("%d ",arr1[i]);
            i++;
            j++;
        }
    }
    while(i<m)
    {
        printf("%d ",arr1[i]);
        i++;
    }
    while(j<n){
        printf("%d ",arr2[j]);
        j++;
    }
}
void Intersection(int arr1[],int arr2[],int n,int m)
{
    int i=0,j=0,flag=0;
    for(i=0;i<n;i++)
    {
    int r=arr1[i];
    for(j=0;j<m;j++)
    {
        if(r==arr2[j])
        {
          printf("%d ",arr2[j]);
          flag=1;
        }
    }
    }
    if(flag==0)
    {
        printf("No intersection found\n");
    }

}
int main()
{
    int n,i,m;
    printf("Enter the size of array 1:\n");
    scanf("%d",&n);
    printf("Enter the size of array 2:\n");
    scanf("%d",&m);
    int arr[n],arr1[m];
    printf("Enter elements in array 1 :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter elements in array 2 :\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Union: ");
    Union(arr,arr1,n,m);
    printf("\nIntersection: ");
    Intersection(arr,arr1,n,m);
    return 0;

}