#include <stdio.h>
void maxMinElements(int rows, int columns, int arr[rows][columns])
{
    int max = arr[0][0];
    int min = arr[0][0];
    for (int i = 0; i <= rows - 1; i++)
    {
        for (int j = 0; j <= columns - 1; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            else if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    printf("Maximum element is %d\n", max);
    printf("Minimum element is %d\n", min);
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
    maxMinElements(n, m, arr);
    return 0;
}