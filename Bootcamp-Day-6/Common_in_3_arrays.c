#include<stdio.h>
void FindCommonInThree(int arr1[],int arr2[],int arr3[],int n,int m,int o)
{
    int i=0,j=0,k=0,flag=0;
    for(i=0;i<n;i++)
    {
    int r=arr1[i];
    for(j=0;j<m;j++)
    {
        if(r==arr2[j])
        {
          for(k=0;k<o;k++){
             if(r==arr3[k])
             {
                printf("%d is common\n",arr2[j]);
                flag=1;
             }
          }
        }
    }
    }
    if(flag==0)
    {
        printf("No common element found\n");
    }

}
int main()
{
    int n,i,m,o;
    printf("Enter the size of array 1:\n");
    scanf("%d",&n);
    printf("Enter the size of array 2:\n");
    scanf("%d",&m);
    printf("Enter the size of array 3:\n");
    scanf("%d",&o);
    int arr[n],arr1[m],arr2[o];
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
    printf("Enter elements in array 3 :\n");
    for(i=0;i<o;i++)
    {
        scanf("%d",&arr2[i]);
    }
    FindCommonInThree(arr,arr1,arr2,n,m,o);
    return 0;

}