#include <stdio.h>
int mulArray(int arr[], int n)
{
    int mul = 1;
    for (int i = 0; i <= n - 1; i++)
    {
        mul = mul * arr[i];
    }
    return mul;
}
int main()
{
    int n;
    printf("How many elements you want int your array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your array : ");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Product of all elements of array is %d", mulArray(arr, n));
    return 0;
}