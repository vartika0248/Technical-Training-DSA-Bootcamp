#include<stdio.h>
int Missing_Number(int arr[],int n)
{
    int i,j,XOR=0,XOR1=0;
    for(i=0;i<n-1;i++)
    {
       XOR=XOR^arr[i];
    }
    for(j=1;j<=n;j++)
    {
       XOR1=XOR1^j;
    }
    return XOR^XOR1;
}
int main()
{
    int n,i;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int arr[n-1];
    printf("Enter elements in array like series of numbers with one missing term:\n");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m_n=Missing_Number(arr,n);
    printf("The Missing Number is %d\n",m_n);
    return 0;
}