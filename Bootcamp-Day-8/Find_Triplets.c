#include <stdio.h>
void printTripletsWithSum(int arr[], int size, int X) {
    for (int i = 0; i < size - 2; i++) {
        int left = i + 1;    
        int right = size - 1; 
        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == X) {
                printf("Triplet found: (%d, %d, %d)\n", arr[i], arr[left], arr[right]);
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
    printf("Enter the sum to find triplets: ");
    scanf("%d", &X);
    printTripletsWithSum(arr, n, X);
    return 0;
}
