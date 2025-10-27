#include <stdio.h>
void nTo1(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d ", n);
    nTo1(n - 1);
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    nTo1(n);
    return 0;
}
