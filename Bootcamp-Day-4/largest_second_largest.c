#include<stdio.h>
int main()
{
    int n,i,s_lar,lar;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(arr[0]>arr[1]){
      s_lar=arr[1];
      lar=arr[0];
    }
    else{
      s_lar=arr[0];
      lar=arr[1];
    }
    for(i=2;i<n;i++)
    {
      if(lar<arr[i])
      {
        s_lar=lar;
        lar=arr[i];
      }
      else{
        s_lar=arr[i];
      }
    }
    printf("Lagest=%d\n",lar);
    printf("Second Largest=%d\n",s_lar);
    return 0;
}