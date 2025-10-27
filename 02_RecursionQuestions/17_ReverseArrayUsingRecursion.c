#include <stdio.h>
void reverseArray(int arr[], int n, int i, int j)
{
    if (i >= j)
    { /* base case */
        return;
    }
    /* swapping */
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    reverseArray(arr, n, i + 1, j - 1);
    return;
}
int main()
{
    int n;
    printf("How many number you want to enter : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your numbers : ");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    reverseArray(arr, n, 0, n - 1);
    printf("Reversed array is : ");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}