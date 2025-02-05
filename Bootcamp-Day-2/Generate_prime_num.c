#include <stdio.h>
int main() 
{
    int num, i, j, isPrime;
    printf("Enter the value of N: ");
    scanf("%d", &num);
    printf("Prime numbers between 1 and %d are: \n", num);
    for (i = 2; i <= num; i++) {
        isPrime = 1;  
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;  
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
