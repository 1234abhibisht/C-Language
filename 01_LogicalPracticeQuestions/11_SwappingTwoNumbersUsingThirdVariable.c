#include <stdio.h>
void swap(int a, int b) {
    int c=a;
    printf("Swap is %d%d",b, c);
}
int main() {
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d",&a);
    scanf("%d",&b);
    swap(a,b);
    return 0;
}
