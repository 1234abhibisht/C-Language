#include <stdio.h>
void increasingDecreasing(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d ", n);
    increasingDecreasing(n - 1);
    printf("%d ", n);
    return;
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    increasingDecreasing(n);
    return 0;
}
