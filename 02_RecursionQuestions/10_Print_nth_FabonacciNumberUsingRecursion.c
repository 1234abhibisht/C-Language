#include <stdio.h>
int fabonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    int x = fabonacci(n - 1) + fabonacci(n - 2);
    return x;
}
int main()
{
    int n;
    printf("Enter which term you want : ");
    scanf("%d", &n);
    printf("%dth term is %d", n, fabonacci(n));
    return 0;
}