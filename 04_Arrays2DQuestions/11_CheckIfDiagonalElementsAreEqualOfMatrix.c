/* one method is that we can store each element of marix in an array and then compare elements
   of array */

/* here I have solved this question using direct method without first putting diagonal elements
   to array and then compare them */
#include <stdio.h>
#include <stdbool.h>
void diagonalCheck(int n, int arr[n][n])
{
    int first = arr[0][0];
    /* store first element of matrix in first variable */
    bool flag = true;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (arr[i][i] != first)
            {
                flag = false;
                break;
            }
        }
    }
    if (flag == false)
    {
        printf("Diagonal elements are not equal\n");
    }
    else
    {
        printf("Diagonal elements are equal\n");
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
    diagonalCheck(n, arr);
    return 0;
}