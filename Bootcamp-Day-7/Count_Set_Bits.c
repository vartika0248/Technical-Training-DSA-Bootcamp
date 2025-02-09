#include<stdio.h>
int CountSetBits(int n)
{
    int count=0,count1=0;
    int num=n;
    while(n>0)
    {
        n=(n&(n-1));
        count=count+1;
    }
    /**while(num!=0)
    {
        if(num%2==1)
        {
            count1++;
        }
        num=num/2;
    }**/
    //printf("Count=%d \nCount1=%d\n",count,count1);
    return count;
}
int main()
{
    int n;
    printf("Enter any number:\n");
    scanf("%d",&n);
    int r= CountSetBits(n);
    printf("Number of Set bit is %d\n",r);
    return 0;
}