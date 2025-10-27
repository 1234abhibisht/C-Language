#include <stdio.h>
void max0Elements(int rows, int columns, int arr[rows][columns])
{
    int greatRow = 0;
    int row0 = 0;
    for (int i = 0; i <= rows - 1; i++)
    {
        int count_0 = 0;
        for (int j = 0; j <= columns - 1; j++)
        {
            if (arr[i][j] == 0)
            {
                count_0++;
            }
        }
        if (count_0 > greatRow)
        {
            greatRow = count_0;
            row0 = i + 1;
        }
    }
    printf("Maximum zeroes are in %d row\n", row0);
    printf("Number of zeros in %d row are %d\n", row0, greatRow);
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
    max0Elements(n, m, arr);
    return 0;
}