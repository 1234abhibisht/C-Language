#include <stdio.h>
void swap(int a, int b) {
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swap is : %d %d",a, b);
}
int main() {
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d",&a);
    scanf("%d",&b);
    swap(a,b);
    return 0;
}
