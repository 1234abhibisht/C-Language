#include <stdio.h>
void sumRecursion(int sum, int n)
{
    if (n == 0)
    {
        printf("Sum is %d", sum);
        return;
    }
    sumRecursion(sum + n, n - 1);
    return;
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    sumRecursion(0, n);
    return 0;
}
