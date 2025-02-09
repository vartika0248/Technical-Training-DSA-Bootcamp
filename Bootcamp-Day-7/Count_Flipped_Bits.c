#include<stdio.h>
int CountFlips(int a,int b)
{
    int flips=0;
    while(a>0 || b>0)
    {
        int t1=(a & 1);
        int t2=(b & 1);
        if(t1 != t2)
        {
            flips++;
        }
        a>>=1;
        b>>=1;
    }
    return flips;
}
int main()
{
    int A,B;
    printf("Enter any two numbers:\n");
    scanf("%d %d ",&A,&B);
    int f= CountFlips(A,B);
    printf("Number of bits to be flipped to convert A to B is %d\n",f);
    return 0;

}