#include<stdio.h>
void productExceptSelf(int* nums, int numsSize, int* returnSize) 
{
   for(int i=0;i<numsSize;i++)
   {
    int prod=1;
    for(int j=0;j<numsSize;j++)
    {
        if(i!=j)
        {
            prod*=nums[j];
        }
    }
    returnSize[i]=prod;
   }
}
int main()
{
    int n;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int nums[n];
    int returnarray[n];
    printf("Enter elements in array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    productExceptSelf(nums,n,returnarray);
    for(int i=0;i<n;i++)
    {
      printf("%d ",returnarray[i]);
    }
    return 0;
}