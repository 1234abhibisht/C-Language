#include <stdio.h>
void rotateMatrix(int rows, int columns, int arr[rows][columns])
{
    /* first we will take transpose of matrix */
    for (int i = 0; i <= rows - 1; i++)
    {
        for (int j = i + 1; j <= columns - 1; j++)
        {
            /* swap arr[i][j] with arr[j][i] */
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    /* reverse each row */
    for (int i = 0; i <= rows - 1; i++)
    {
        int j = 0;
        int k = columns - 1;
        while (j < k)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
    }
    printf("Rotated matrix is : \n");
    /* after rotation rows will be columns, and columns will be rows */
    for (int i = 0; i <= columns - 1; i++)
    {
        for (int j = 0; j <= rows - 1; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return;
}
int main()
{
    printf("Enter rows/columns for square matrix\n");
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
    rotateMatrix(n, m, arr);
    return 0;
}