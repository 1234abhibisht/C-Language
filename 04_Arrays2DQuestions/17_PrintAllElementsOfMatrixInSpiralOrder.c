#include <stdio.h>
void sprialMatrix(int n, int m, int arr[n][m])
{
    int minrow = 0;
    int maxrow = n - 1;
    int mincolumn = 0;
    int maxcolumn = m - 1;
    int totalElements = n * m;
    int count = 0;
    while (count < totalElements)
    {
        for (int j = minrow; j <= maxcolumn; j++)
        {
            printf("%d ", arr[minrow][j]);
            count++;
        }
        minrow++;
        for (int i = minrow; i <= maxrow; i++)
        {
            printf("%d ", arr[i][maxcolumn]);
            count++;
        }
        maxcolumn--;
        for (int j = maxcolumn; j >= mincolumn; j--)
        {
            printf("%d ", arr[maxrow][j]);
            count++;
        }
        maxrow--;
        for (int i = maxrow; i >= minrow; i--)
        {
            printf("%d ", arr[i][mincolumn]);
            count++;
        }
        mincolumn++;
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
    sprialMatrix(n, m, arr);
    return 0;
}