#include <stdio.h>
int primenumber(int p)
{
    for (int i = 2; i <= p - 1; i++)
    {
        if (p % i == 0)
        { /* composite number */
            return 0;
        }
    }
    return 1; /* prime number */
}
void factor(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0 && primenumber(i))
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    int n, p;
    printf("Enter a number : ");
    scanf("%d", &n);
    factor(n);
    return 0;
}
