#include <stdio.h>
void mergeArrays(int arr1[], int arr2[], int n, int m)
{
    int resultArr[m + n];
    /* put elements of first array in resultant array */
    for (int i = 0; i <= n - 1; i++)
    {
        resultArr[i] = arr1[i];
    }
    /* put elements of second array in resultant array */
    for (int j = 0; j <= m - 1; j++)
    {
        resultArr[n + j] = arr2[j];
    }
    /* print resultant array */
    printf("Merged array is : ");
    for (int k = 0; k <= (m + n) - 1; k++)
    {
        printf("%d ", resultArr[k]);
    }
    return;
}
int main()
{
    int n;
    printf("Enter how many elements you want to enter in first array : ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter first array : ");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    int m;
    printf("Enter how many elements you want to enter in second array : ");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter second array : ");
    for (int i = 0; i <= m - 1; i++)
    {
        scanf("%d", &arr2[i]);
    }
    mergeArrays(arr1, arr2, n, m);
    return 0;
}