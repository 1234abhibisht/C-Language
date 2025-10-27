#include <stdio.h>
void swap(int* a, int* b) {  /* a and b (foraml parameter) have stored address passed by actual parameters */
    int c = *a; /* value of a */
    *a = *b;  /* a = b */
    *b = c;  /* value of c in b*/
    printf("Swap is %d %d",*a,b);
}
int main() {
    int a;
    printf("Enter first number : ");
    scanf("%d",&a);
    int b;
    printf("Enter second number : ");
    scanf("%d",&b);
    swap(&a,&b);  /* i have pass address of a and b (actual parameter)*/
    return 0;
}
