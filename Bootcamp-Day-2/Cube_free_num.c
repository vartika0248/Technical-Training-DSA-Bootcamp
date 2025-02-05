#include <stdio.h>
#include <math.h>
int isCubeFree(int b) {
    for (int i = 2; i * i * i <= b; i++) {
        if (b % (i * i * i) == 0) {
            return 0;  
        }
    }
    return 1;  
}
int main() {
    int n, a, b;
    printf("Enter a number n: ");
    scanf("%d", &n);
    for (a = 1; a * a * a <= n; a++) {
        if (n % (a * a * a) == 0) {
            b = n / (a * a * a);  
            if (isCubeFree(b)) {  
                printf("a = %d, b = %d\n", a, b);
                return 0;  
            }
        }
    }
    printf("No solution found.\n");
    return 0;
}
