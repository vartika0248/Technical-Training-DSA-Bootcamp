#include<stdio.h>
int EquilibriumPoint_Is(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        res+=arr[i];
    }
    int ls=0;
    for(int i=0;i<n;i++)
    {
        res=res-arr[i];
        if(ls==res)
        {
            return 1;
        }
        ls+=arr[i];
    }
    return 0;
}
int main()
{
    int n,i;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int r= EquilibriumPoint_Is(arr,n);
    if(r==1)
    {
        printf("There is Equilibrium Point(true).\n");
    }
    else{
        printf("There is no Equilibrium Point(false).\n");
    }
    return 0;
}