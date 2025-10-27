#include <stdio.h>
void product(int n) {
    int mul = 1;
    int a = n;
    while(n != 0) {
        int lastdigit = n % 10;
        if(lastdigit % 2 != 0) {
            mul = mul * lastdigit;
        }
        n = n / 10;
    }
    printf("Product of odd digits of %d is %d",a,mul);
}
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    product(n);
    return 0;
} 
