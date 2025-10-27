/* number of steps allowed are one, two and three at a time */

#include <stdio.h>
int stairPath(int n)
{
    if (n == 1 || n == 2)
    {
        return n;
    }
    else if (n == 3)
    {
        return n + 1;
    }
    int x = stairPath(n - 1) + stairPath(n - 2) + stairPath(n - 3);
    return x;
}
int main()
{
    int n;
    printf("Enter number of stairs : ");
    scanf("%d", &n);
    printf("Number of ways to climb %d stairs are %d", n, stairPath(n));
    return 0;
}