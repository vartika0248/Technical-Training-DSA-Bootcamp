#include<stdio.h>
void countAndSumDigits(int num, int *count, int *sum) 
{
    if (num == 0) {
        return; 
    }
    (*count)++;
    *sum += num % 10;
    countAndSumDigits(num / 10, count, sum);
}
int main()
{
    int num,count=0,sum=0;
    printf("Enter any number:\n");
    scanf("%d",&num);
    if (num == 0) {
        count = 1;
        sum = 0;
    }
    else {
    
        countAndSumDigits(num, &count, &sum);
    }
    printf("Number of digits: %d\n", count);
    printf("Sum of digits: %d\n", sum);
    return 0;
}