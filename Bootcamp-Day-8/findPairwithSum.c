#include <stdio.h>
void printAllPairsWithSum(int arr[], int size, int X) {
    int left = 0;
    int right = size - 1;
    int foundPair = 0;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == X) {
            printf("Pair found: (%d, %d)\n", arr[left], arr[right]);
            foundPair = 1;
            left++;  
            right--; 
        }
        else if (sum < X) {
            left++; 
        }
        else {
            right--; 
        }
    }

    if (!foundPair) {
        printf("No pairs with sum %d found.\n", X);
    }
}

int main() {
    int n, X;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the sorted array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the sum to find pairs: ");
    scanf("%d", &X);
    printAllPairsWithSum(arr, n, X);
    return 0;
}
