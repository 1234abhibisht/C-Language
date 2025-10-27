#include <stdio.h>
/* int has a limit, so to get more power use long long datatype */
int aPowerb(int base, int power) {
    if(power == 0) {
        return 1;
    }
    int x = aPowerb(base,power / 2);
    if(power % 2 == 0) {
        x = x * x;
    }
    else {
        x = x * x * base;
    }
    return x;
}
int main() {
    int base;
    printf("Enter value of base : ");
    scanf("%d",&base);
    int power;
    printf("Enter value of power : ");
    scanf("%d",&power);
    printf("%d power %d is %d",base,power,aPowerb(base,power));
    return 0;
}