#include <stdio.h>
void hello(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("Hello World\n");
    hello(n - 1);
    return;
}
int main()
{
    int n;
    printf("Enter how many times you want to print : ");
    scanf("%d", &n);
    hello(n);
    return 0;
}
