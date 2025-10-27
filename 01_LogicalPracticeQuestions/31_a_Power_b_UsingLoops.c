/* a power b = a * a * a * a...b times */

#include <stdio.h>
void power(int a, int b)
{
    int mul = 1;
    for (int i = 1; i <= b; i++)
    {
        mul = mul * a;
    }
    printf("%d", mul);
    return;
}
int main()
{
    int a;
    printf("Enter base value : ");
    scanf("%d", &a);
    int b;
    printf("Enter power value : ");
    scanf("%d", &b);
    power(a, b);
    return 0;
}
