#include <stdio.h>
void firstRow(int rows, int columns, int arr[rows][columns])
{
    for (int i = 0; i <= 0; i++)
    {
        for (int j = 0; j <= columns - 1; j++)
        {
            printf("%d ", arr[i][j]);
        }
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
    firstRow(n, m, arr);
    return 0;
}