#include <stdio.h>
void insertElement(int arr[], int n, int a, int idx)
{
    for (int i = n - 1; i >= idx; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[idx] = a;
    return;
}
int main()
{
    int n;
    printf("Enter how many elements you want to enter : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your array : ");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    int a;
    printf("Enter a number to insert in array : ");
    scanf("%d", &a);
    int idx;
    printf("Enter the index in which you want to enter the number : ");
    scanf("%d", &idx);
    insertElement(arr, n, a, idx);
    printf("Updated array is : ");
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}