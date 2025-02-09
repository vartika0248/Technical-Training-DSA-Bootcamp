#include<stdio.h>
void peakElement(int arr[], int n)
{
    if (n == 1) {
        printf("Peak element: %d\n", arr[0]);
        return;
    }
    if (arr[0] >= arr[1]) {
        printf("Peak element: %d\n", arr[0]);
    }
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            printf("Peak element: %d\n", arr[i]);
        }
    }
    if (arr[n - 1] >= arr[n - 2]) {
        printf("Peak element: %d\n", arr[n - 1]);
    }
}
int main()
{
    int n,i;
    printf("Enter the size of element:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in an array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    peakElement(arr,n);
    return 0;
}