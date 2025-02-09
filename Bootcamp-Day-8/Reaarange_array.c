#include<stdio.h>
void rearrangeArray(int* nums, int numsSize, int* returnSize) 
{
   int i;
   int n=numsSize;
   int neg[n/2],pos[n/2];
   int negIndex=0,posIndex=0;
   for(i=0;i<numsSize;i++)
   {
     if(nums[i]<0)
     {
       neg[negIndex]=nums[i];
       negIndex++;
     }
     else{
        pos[posIndex]=nums[i];
        posIndex++;
     }
   }
   posIndex=0;
   negIndex=0;
   for(i=0;i<numsSize;i++)
   {
     if(i%2==0)
     {
       returnSize[i]=pos[posIndex];
       posIndex++;
     }
     else{
        returnSize[i]=neg[negIndex];
        negIndex++;
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