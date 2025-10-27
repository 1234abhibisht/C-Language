#include <stdio.h>
void primeComposite(int n)
{
    int x;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            x = 1;
            break;
        }
        else
        {
            x = 0;
        }
    }
    if (n == 1)
    {
        printf("%d is neither prime nor composite", n);
    }
    else if (x == 1)
    {
        printf("%d is a composite number", n);
    }
    else
    {
        printf("%d is a prime number", n);
    }
    return;
}
int main()
{
    int n;
    printf("Enter a number to check whether it is prime or composite : ");
    scanf("%d", &n);
    primeComposite(n);
    return 0;
}
