#include <stdio.h>
void reverseArray(int arr[], int i, int j)
{
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
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
    reverseArray(arr, 0, n - 1);
    /* print reversed array */
    printf("Reversed array is : ");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}