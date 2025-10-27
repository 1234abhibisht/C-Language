#include <stdio.h>
void triangleCheck(int a, int b, int c) {
    if(a + b > c && b + c > a && c + a > b) {
        printf("Triangle is valid\n");
        if(a == b && a == c) {
        printf("Triangle is Equilateral");
        }
    else if((a == b && a != c) || (a == c && a != c) || (b == c && b != a)) {
            printf("Triangle is Isosceles");
        }
    else if(a != b && a != c && b != c) {
        printf("Triangle is Scalene");
     }
    }
    else {
        printf("Triangle is not valid");
    }
    return;
}
int main() {
    int a;
    printf("Enter first length : ");
    scanf("%d",&a);
    int b;
    printf("Enter second length : ");
    scanf("%d",&b);
    int c;
    printf("Enter third length : ");
    scanf("%d",&c);
    triangleCheck(a,b,c);
    return 0;
}
