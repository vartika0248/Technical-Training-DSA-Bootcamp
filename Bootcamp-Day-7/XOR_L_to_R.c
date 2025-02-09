#include<stdio.h>
int FindXOR(int l,int r)
{
    int ans=0;
    for(int i=l;i<=r;i++)
    {
        ans=ans^i;
    }
    return ans;
}
int main()
{
  int l,r;
  printf("Enter value for l and r:\n");
  scanf("%d %d",&l,&r);
  int x= FindXOR(l,r);
  printf("Xor of numbers from l to r is %d \n",x);
  return 0;
}