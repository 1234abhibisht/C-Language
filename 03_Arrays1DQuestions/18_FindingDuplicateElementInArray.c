#include <stdio.h>
void duplicateElement(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int flag = 0;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            printf("Duplicate element is %d\n", arr[i]);
            return;
        }
    }
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
    duplicateElement(arr, n);
    return 0;
}