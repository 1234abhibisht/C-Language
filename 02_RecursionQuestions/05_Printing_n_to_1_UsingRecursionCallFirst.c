#include <stdio.h>
void callFirst(int n, int a)
{
    if (a > n)
    {
        return;
    }
    callFirst(n, a + 1);
    printf("%d ", a);
    return;
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    callFirst(n, 1);
    return 0;
}
