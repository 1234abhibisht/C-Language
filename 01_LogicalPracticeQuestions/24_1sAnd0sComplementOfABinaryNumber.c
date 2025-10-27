#include <stdio.h>
void complement(int a,int arr[]) { 
    for(int j = 0; j <= a - 1; j++) {
        if(arr[j] == 1) {
            arr[j] = 0;
        }
        else if(arr[j] == 0) {
            arr[j] = 1;
        }
        printf("%d ",arr[j]);
    }
}
int main() {
    int n;
    printf("How many digits will be in your binary number : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter a binary number with spaces between them : ");
    for(int i = 0; i <= n - 1; i++) {
        scanf("%d",&arr[i]);
    }
    complement(n,arr);
    return 0;
}
