#include<stdio.h>
void SortedArray(int arr[],int n)
{
   int zero=0,one=0,two=0,i,j;
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            zero++;
        }
        if(arr[i]==1)
        {
            one++;
        }
        if(arr[i]==2){
            two++;
        }
    }
    int n1=zero+one+two;
    int a[n1];
    j=0;
    for(i=0;i<zero;i++)
    {
       a[j]=0;
       j++;
    }
    for(i=0;i<one;i++){
        a[j]=1;
        j++;
    }
    for(i=0;i<two;i++){
        a[j]=2;
        j++;
    }
    printf("\nSorted array is :\n");
    for(i=0;i<n1;i++)
    {
        printf("%d ",a[i]);
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
    SortedArray(arr,n);
    return 0;
}