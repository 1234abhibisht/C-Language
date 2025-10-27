/* only 1 and 2 steps are allowed at a time */

#include <stdio.h>
int stairCase(int n)
{
    if (n == 1 || n == 2)
    {
        return n;
    }
    int x = stairCase(n - 1) + stairCase(n - 2);
    return x;
}
int main()
{
    int n;
    printf("Enter for how many stairs you want to calculate : ");
    scanf("%d", &n);
    printf("Number of ways to climb %d stairs are %d", n, stairCase(n));
    return 0;
}