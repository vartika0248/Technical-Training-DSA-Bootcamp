#include<stdio.h>
int main()
{
    int i=1,count=0;
    while(i++<5);
        printf("%d\n",i);
    
    char ch=1;
    for(10;ch;ch++)
    {
     printf("MCA");
     count++;
    }
    printf("\nCount=%d\n",count);
   // for(0;1;0)           //Infinity and for( ; ; ) also infinity
   //{
   //    printf("MCA");
   //}
   int a;
   a=12>2?printf("MCA") && printf(" GLB") || printf(" ITM") : printf(" CTM");//printf return type integer
   printf("\na=%d\n",a);
   int x,y,z,lar;
   printf("Enter any three number:\n");
   scanf("%d %d %d",&x,&y,&y);
   lar=(x>y)&&(x>z)?x:((y>z)?y:z);
   printf("Largest= %d\n",lar);
   if(x>y && x>z)
   {
    printf("Largest= %d\n",x);
   }
   else if(y>z)
   {
    printf("Largest= %d\n",y);
   }
   else
   {
    printf("Largest= %d\n",z);
   }
   return 0;
}