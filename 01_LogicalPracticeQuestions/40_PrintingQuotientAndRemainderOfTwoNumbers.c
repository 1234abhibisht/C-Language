#include <stdio.h>
int quotientFun(int divident, int divisor)
{
    /* we know quotient = Divident / Divisor */
    int qut = divident / divisor;
    return qut;
}
int remainderFun(int divident, int divisor)
{
    /* we know divident = divisor * quotient + remainder
       remainder = divident - (divisor * quotient)*/
    int rem = divident - (divisor * quotientFun(divident, divisor));
    return rem;
}
int main()
{
    int divident;
    printf("Enter value of divident : ");
    scanf("%d", &divident);
    int divisor;
    printf("Enter value of divisor : ");
    scanf("%d", &divisor);
    printf("Quotient of %d and %d is %d\n", divident, divisor, quotientFun(divident, divisor));
    printf("Remainder of %d and %d is %d", divident, divisor, remainderFun(divident, divisor));
    return 0;
}
