#include <stdio.h>
void increment(int n, int a)
{
    if (a > n)
    {
        return;
    }
    printf("%d ", a);
    increment(n, a + 1);
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    increment(n, 1);
    return 0;
}
