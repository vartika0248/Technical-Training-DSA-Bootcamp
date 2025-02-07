#include<stdio.h>
void Frequencies(int arr[],int n)
{
    int freq=1,i=1;
    while(i<n)
    {
        while(i<n && arr[i]==arr[i-1])
        {
            freq++;
            i++;
        }
        printf("%d => %d\n",arr[i-1],freq);
        i++;
        freq=1;
    }
    if(n==1 || arr[n-1] !=  arr[n-2])
    {
        printf("%d %d ",arr[n-1],1);
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
    printf("Frequencies are:\n");
    Frequencies(arr,n);
    return 0;

}