#include <stdio.h>
void factors(int n) {
    int j = 0;
    int arr[n - 1];
    for(int i = 1; i <= n - 1; i++) {
        if(n % i == 0) {
            arr[j] = i;
            j++;
        }
    }
    int sum = 0;
    for(int k = 0; k <= 2; k++) {
        sum = sum + arr[k];
    }
    if(sum == n) {
        printf("%d is a perfect number",n);
    }
    else {
        printf("%d is not a perfect number",n);
    }
}
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    factors(n);
    return 0;
}
