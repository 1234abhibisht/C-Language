/* two matrices can only be multiplied if column of first matrix and row of second matrix is same
   then resultant matrix will be of row of first matrix and column of second matrix */

#include <stdio.h>
void multiplyMatrices(int rows1, int columns1, int rows2, int columns2, int arr1[rows1][columns1], int arr2[rows2][columns2])
{
    if (rows2 != columns1)
    {
        printf("Matrices cannot be multiplied");
    }
    else
    {
        int resultArr[rows1][columns2];
        for (int i = 0; i <= rows1 - 1; i++)
        {
            for (int j = 0; j <= columns2 - 1; j++)
            {
                resultArr[i][j] = 0;
                for (int k = 0; k <= columns1 - 1; k++)
                {
                    resultArr[i][j] = resultArr[i][j] + arr1[i][k] * arr2[k][j];
                }
            }
        }
        printf("Multiplication of both matrices is : \n");
        for (int i = 0; i <= rows1 - 1; i++)
        {
            for (int j = 0; j <= columns2 - 1; j++)
            {
                printf("%d ", resultArr[i][j]);
            }
            printf("\n");
        }
    }
    return;
}
int main()
{
    int n;
    printf("Enter number of rows of your first matrix : ");
    scanf("%d", &n);
    int m;
    printf("Enter number of columns of your first matrix : ");
    scanf("%d", &m);
    int arr1[n][m];
    printf("Enter your first matrix : \n");
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    int p;
    printf("Enter number of rows of your second matrix : ");
    scanf("%d", &p);
    int q;
    printf("Enter number of columns of your second matrix : ");
    scanf("%d", &q);
    int arr2[p][q];
    printf("Enter your second matrix : \n");
    for (int i = 0; i <= p - 1; i++)
    {
        for (int j = 0; j <= q - 1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    multiplyMatrices(n, m, p, q, arr1, arr2);
    return 0;
}