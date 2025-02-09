#include<stdio.h>
void rearrangeArray(int* nums, int numsSize, int* returnSize) 
{
   int i;
   int negIndex=1,posIndex=0;
   for(i=0;i<numsSize;i++)
   {
     if(nums[i]<0)
     {
       returnSize[negIndex]=nums[i];
       negIndex+=2;
     }
     else{
        returnSize[posIndex]=nums[i];
        posIndex+=2;
     }
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
    rearrangeArray(nums,n,returnarray);
    printf("The new arrange array is \n");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",returnarray[i]);
    }
    return 0;
}