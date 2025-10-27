/* if matrix is
   1 2 3
   4 5 6
   7 8 9
   output -> 1 8 3
             4 5 6
             7 2 9  */

#include <stdio.h>
void wavePrinting(int n, int arr[n][n])
{
    /* if column is odd, reverse it */
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (j % 2 != 0)
            {
                int a = 0;
                int b = n - 1;
                while (a < b)
                {
                    int temp = arr[a][j];
                    arr[a][j] = arr[b][j];
                    arr[b][j] = temp;
                    a++;
                    b--;
                }
            }
        }
    }
    printf("Output after wave is : ");
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return;
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
    wavePrinting(n, arr);
    return 0;
}