/* ncr = n!/r!(n-r)! */
#include <stdio.h>
int fact(int a)
{ /* this function is for factoral loop */
    int mul = 1;
    for (int i = a; i >= 1; i--)
    {
        mul = mul * i;
    }
    return mul;
}
int Combination(int n, int r)
{
    if (r == n || r == 0)
    {
        return 1;
    }
    int comb = fact(n) / (fact(r) * fact(n - r));
    return comb;
}
int main()
{
    int n;
    printf("Enter number of items : ");
    scanf("%d", &n);
    int r;
    printf("Enter number of selected items from n: ");
    scanf("%d", &r);
    fact(n);
    Combination(n, r);
    printf("binomial coefficient of %d and %d is %d", n, r, Combination(n, r));
    return 0;
}
