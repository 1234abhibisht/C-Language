/* User can input as many numbers, tell how many of them are positive, negative and zero */
#include <stdio.h>
void count(int arr[], int n)
{
    int positive = 0;
    int negative = 0;
    int zero = 0;
    for (int j = 0; j <= n - 1; j++)
    {
        if (arr[j] > 0)
        {
            positive++;
        }
        else if (arr[j] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }
    printf("Negative numbers are %d\n", negative);
    printf("Positive numbers are %d\n", positive);
    printf("Zeroes are %d", zero);
    return;
}
int main()
{
    int n;
    printf("Enter how many numbers you want to enter: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your numbers(make sure to give spaces between them) : \n");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    count(arr, n);
    return 0;
}
