#include <stdio.h>
int reverse(int n) {
    int r = 0;
    int lastdigit = 0;
    int a = n;
    while(n!=0) {
        lastdigit = n % 10;
        r = r * 10;
        r = r + lastdigit;
        n = n / 10;
    }
    printf("reverse of %d is %d",a,r);
}
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    reverse(n);
    return 0;
}
