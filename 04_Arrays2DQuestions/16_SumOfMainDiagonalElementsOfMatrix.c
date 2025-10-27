#include <stdio.h>
int diagonalSum(int n, int arr[n][n])
{
    int sum = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (i == j)
            {
                sum = sum + arr[i][j];
            }
        }
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter row/column of your square matrix : ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter your matrix : \n");
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Sum of all diagonal elements of array is %d\n", diagonalSum(n, arr));
    return 0;
}