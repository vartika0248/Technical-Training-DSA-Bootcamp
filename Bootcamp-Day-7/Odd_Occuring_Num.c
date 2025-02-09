#include<stdio.h>
int OddOccuringNumber(int arr[],int n)
{
   int i;
   int ans=arr[0];
   for(i=1;i<n;i++)
   {
      ans=ans^arr[i];
   }
   return ans;
}
int main()
{
    int n;
    printf("Enter size of Array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ans=OddOccuringNumber(arr,n);
    printf("Only Odd Occurinng Number is %d\n",ans);
    return 0;
}