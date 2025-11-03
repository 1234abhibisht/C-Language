/* 1234 -> [1,2,3,4] */

#include <stdio.h>
int countDigit(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int digits = countDigit(n);
    int arr[digits];
    int idx = digits - 1;
    int lastdigit = 0;
    while (n > 0)
    {
        lastdigit = n % 10;
        arr[idx] = lastdigit;
        idx--;
        n = n / 10;
    }
    printf("Each digit of number in array is ");
    for (int i = 0; i <= digits - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
