#include <stdio.h>
void callFirst(int n)
{
    if (n == 0)
    {
        return;
    }
    callFirst(n - 1);
    printf("%d ", n);
    return;
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    callFirst(n);
    return 0;
}
