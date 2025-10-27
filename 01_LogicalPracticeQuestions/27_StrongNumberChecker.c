#include <stdio.h>
int factorial(int a) {
    int mul = 1;
    for(int i = a; i >= 1; i--) {
        mul = mul * i;
    }
    return mul;
}
void strongnumber(int n) {
    int sum = 0;
    int x = n;
    while(n != 0) {
        int lastdigit = n % 10;
        sum = sum + factorial(lastdigit);
        n = n / 10;
    }
    if(sum == x) {
        printf("%d is a strong number",x);
    }
    else {
        printf("%d is not a strong number",x);
    }
}
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    strongnumber(n);
    return 0;
}
