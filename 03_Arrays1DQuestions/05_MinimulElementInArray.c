#include <stdio.h>
int minElement(int arr[], int n)
{
    int minimum = arr[0];
    for (int i = 1; i <= n - 1; i++)
    {
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }
    return minimum;
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
    printf("Minimul element of all elements is %d", minElement(arr, n));
    return 0;
}