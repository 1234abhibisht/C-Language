/* nPr = n!/(n-r)!*/
#include <stdio.h>
int factorial(int a)
{
    int mul = 1;
    for (int i = a; i >= 1; i--)
    {
        mul = mul * i;
    }
    return mul;
}
int Permutation(int n, int r)
{
    int x = factorial(n) / factorial(n - r);
    printf("nPr = %d", x);
}
int main()
{
    int n;
    printf("Enter total number of entities : ");
    scanf("%d", &n);
    int r;
    printf("Enter number of items to be selected : ");
    scanf("%d", &r);
    Permutation(n, r);
    return 0;
}
