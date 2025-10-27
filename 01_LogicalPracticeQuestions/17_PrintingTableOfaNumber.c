#include <stdio.h>
int table(int n) {
    int j = 1;
    for(int i = n; i <= n * 10; i += 2) {
            printf("%d * %d = %d\n",n,j,i);
            j++;
        }
    }
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    table(n);
    return 0;
}
