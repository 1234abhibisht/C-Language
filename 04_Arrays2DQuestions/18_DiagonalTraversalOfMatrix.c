#include <stdio.h>
#include <stdbool.h>
void diagonalTraversal(int n, int m, int arr[n][m])
{
    bool up = true;
    int row = 0;
    int column = 0;
    while (row <= n - 1 && column <= m - 1)
    {
        if (up == true)
        { /* diagonally up */
            while (column <= m - 2 && row > 0)
            {
                printf("%d ", arr[row][column]);
                row--;
                column++;
            }
            /* manually print m - 1 th element */
            printf("%d ", arr[row][column]);
            if (column == m - 1)
            {
                row++;
            }
            else
            {
                column++;
            }
        }
        else
        { /* diagonally down */
            while (row <= n - 2 && column > 0)
            {
                printf("%d ", arr[row][column]);
                row++;
                column--;
            }
            /* manually print n - 1 th element */
            printf("%d ", arr[row][column]);
            if (row == n - 1)
            {
                column++;
            }
            else
            {
                row++;
            }
        }
        up = !up;
    }
    return;
}
int main()
{
    int n;
    printf("Enter number of rows for matrix : ");
    scanf("%d", &n);
    int m;
    printf("Enter number of columns for matrix : ");
    scanf("%d", &m);
    int arr[n][m];
    printf("Enter matrix : \n");
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    diagonalTraversal(n, m, arr);
    return 0;
}
