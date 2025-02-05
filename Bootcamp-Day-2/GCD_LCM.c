#include<stdio.h>
int main()
{
    int num1, num2, i, gcd, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    i = (num1 < num2) ? num1 : num2;  
    while (i > 0) {
        if ((num1 % i == 0) && (num2 % i == 0)) 
        {
            gcd = i;
            break;
        }
        i--;
    }
    lcm = (num1 * num2) / gcd;
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
    return 0;
}