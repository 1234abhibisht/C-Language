/* print elements of matrix in as wave form
   1 2 3
   4 5 6
   7 8 9
   output -> 1 2 3 6 5 4 7 8 9 */

#include <stdio.h>
void wavePrinting(int n, int arr[n][n])
{
    /* if row is odd reverse the row */
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (i % 2 != 0)
            {
                int a = 0;
                int b = n - 1;
                while (a < b)
                {
                    int temp = arr[i][a];
                    arr[i][a] = arr[i][b];
                    arr[i][b] = temp;
                    a++;
                    b--;
                }
            }
        }
    }
    printf("Output after wave print is : \n");
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
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