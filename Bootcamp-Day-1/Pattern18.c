#include <stdio.h>
int main() {
    int n;
	printf("Enter Value of n:\n");
	scanf("%d",&n);
	printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            printf("%d",n-j);
        }
        for(int j=0;j<2*(n-i-1);j++){
            printf("%d",n-i);
        }
        for(int j=1;j<i+1;j++){
            printf("%d",j+n-i);
        }
        printf("\n");
    }
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            printf("%d",n-j);
        }
        for(int j=0;j<2*i+1;j++){
            printf("%d",i+2);
        }
        for(int j=0;j<n-i-1;j++){
            printf("%d",i+j+2);
        }
        
        printf("\n");
    }

    return 0;
}