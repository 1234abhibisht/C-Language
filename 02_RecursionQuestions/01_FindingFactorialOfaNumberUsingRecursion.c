#include <stdio.h>
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    int x = n * factorial(n - 1);
    return x;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Factorial of %d is %d", n, factorial(n));
    return 0;
}
