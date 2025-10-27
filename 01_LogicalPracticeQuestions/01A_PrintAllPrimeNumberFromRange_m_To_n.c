/* function to print all prime number between a range */

#include <stdio.h>
int ISPRIME(int num)
{
    if (num <= 1)
    {
        return 0; /* 0 and 1 are not prime numbers */
    }
    for (int i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            return 0; /* number is composite */
        }
    }
    return 1; /* number is prime */
}
int main()
{
    printf("Enter range upto which you want to print prime numbers\n");
    int n;
    printf("Enter starting number : ");
    scanf("%d", &n);
    int m;
    printf("Enter end number : ");
    scanf("%d", &m);
    printf("Prime numbers between %d and %d are : ", n, m);
    for (int i = n; i <= m; i++)
    {
        int x = ISPRIME(i);
        if (x != 0)
        {
            printf("%d ", i);
        }
    }
   
