#include <stdio.h>
void sumofdigit(int n) {
    int sum = 0;
    int a = n;
    while(n != 0) {
        int lastdigit = n % 10;
        sum = sum + lastdigit;
        n = n / 10;
    }
    printf("sum of digits of %d is %d",a,sum);
}
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    sumofdigit(n);
    return 0;
} 
