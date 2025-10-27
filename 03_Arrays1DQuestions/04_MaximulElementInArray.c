#include <stdio.h>
int maxElement(int arr[], int n)
{
    int greatest = arr[0];
    for (int i = 1; i <= n - 1; i++)
    {
        if (arr[i] > greatest)
        {
            greatest = arr[i];
        }
    }
    return greatest;
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
    printf("Maximum element of all elements is %d", maxElement(arr, n));
    return 0;
}