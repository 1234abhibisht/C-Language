#include <stdio.h>
#include <math.h>
int countdigit(int a) {
    int count = 0;
    while(a != 0) {
        a = a / 10;
        count++;
    }
    return count;
}
void Armstrong(int n) {
    int power = countdigit(n);
    int sum = 0;
    int x = n;
    while(n != 0) {
        int lastdigit = n % 10;
        sum = sum + pow(lastdigit,power);
        n = n / 10;
    }
    if(sum == x) {
        printf("%d is an Armstrong number",x);
    }
    else {
        printf("%d is not an Armstrong number",x);
    }
}
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    Armstrong(n);
    return 0;
}
