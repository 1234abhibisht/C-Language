#include <stdio.h>
void copyArrayReverse(int arr1[], int n)
{
    int arr2[n];
    int idx = n - 1; /* index of arr1 */
    for (int i = 0; i <= n - 1; i++)
    {
        arr2[idx] = arr1[i];
        idx--;
    }
    printf("Array in reverse order after copy is : ");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr2[i]);
    }
    return;
}
int main()
{
    int n;
    printf("Enter how many elements you want to enter : ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter your array : ");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    copyArrayReverse(arr1, n);
    return 0;
}