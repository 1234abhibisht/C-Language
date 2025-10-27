#include <stdio.h>
int aPowerb(int base, int power)
{
    if (power == 0)
    {
        return 1;
    }
    int x = base * aPowerb(base, power - 1);
    return x;
}
int main()
{
    int base;
    printf("Enter value of base : ");
    scanf("%d", &base);
    int power;
    printf("Enter value of power : ");
    scanf("%d", &power);
    printf("%d to power %d is %d", base, power, aPowerb(base, power));
    return 0;
}
