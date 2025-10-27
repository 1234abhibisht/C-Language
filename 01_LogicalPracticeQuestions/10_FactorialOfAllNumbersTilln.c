#include <stdio.h>
int factorial(int a) {  /* this function is for factorial */
    int mul = 1;
    for(int i = a; i >= 1; i--) {
        mul = mul * i;
    }
    return mul;
}
void nfact(int n) {  
    int x;
    for(int j = 1; j <= n; j++) {
        x = factorial(j);
        printf("%d! = %d\n",j,x);
    }
}
int main() {
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    nfact(n);
    return 0;
}
