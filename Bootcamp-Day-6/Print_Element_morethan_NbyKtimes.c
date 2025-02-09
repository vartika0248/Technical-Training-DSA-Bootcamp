#include <stdio.h>
void findElements(int arr[], int n, int k) {
    int t = n / k;
    for (int i = 0; i < n; i++) {
        int count = 1;
        if (arr[i] == -1) {
            continue; 
        }
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;  
            }
        }
        if (count > t) {
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
}
int main()
{
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the value of k: ");
    scanf("%d",&k);
    int arr[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    findElements(arr, n, k);
    return 0;
}
