#include <stdio.h>
void rowSumArray(int rows, int columns, int arr[rows][columns])
{
    int sumArr[rows];
    int idx = 0;
    for (int i = 0; i <= rows - 1; i++)
    {
        int sum = 0;
        for (int j = 0; j <= columns - 1; j++)
        {
            sum = sum + arr[i][j];
        }
        sumArr[idx] = sum;
        idx++;
    }
    printf("Array containing sum of each row is : ");
    for (int i = 0; i <= rows - 1; i++)
    {
        printf("%d ", sumArr[i]);
    }
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
    rowSumArray(n, m, arr);
    return 0;
}