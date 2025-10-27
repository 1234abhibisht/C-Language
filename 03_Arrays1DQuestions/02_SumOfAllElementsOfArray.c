#include <stdio.h>
int sumArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
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
    printf("Sum of all elements of array is %d", sumArray(arr, n));
    return 0;
}