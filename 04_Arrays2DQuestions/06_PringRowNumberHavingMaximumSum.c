#include <stdio.h>
void maxSumRow(int rows, int columns, int arr[rows][columns])
{
    int great = 0;
    int sumRow = 0;
    for (int i = 0; i <= rows - 1; i++)
    {
        int sum = 0;
        for (int j = 0; j <= columns - 1; j++)
        {
            sum = sum + arr[i][j];
        }
        if (sum > great)
        {
            great = sum;
            sumRow = i + 1;
        }
    }
    printf("Maximum sum is %d which is of %d row\n", great, sumRow);
    return;
}
int main()
{
    int n;
    printf("Enter row of your matrix : ");
    scanf("%d", &n);
    int m;
    printf("Enter column of your matrix : ");
    scanf("%d", &m);
    int arr[n][m];
    printf("Enter your matrix : \n");
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    maxSumRow(n, m, arr);
    return 0;
}