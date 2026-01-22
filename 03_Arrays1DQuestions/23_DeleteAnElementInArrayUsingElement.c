#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array : ");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    int element;
    printf("Enter element to delete : ");
    scanf("%d", &element);

    bool elementCheck = false;
    int checkIdx = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] == element)
        {
            checkIdx = i;
            elementCheck = true;
        }
    }
    if (elementCheck == true)
    {
        for (int i = checkIdx; i <= n - 2; i++)
        {
            arr[i] = arr[i + 1];
        }
        for (int i = 0; i <= n - 2; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
        printf("No element found");
    }
    return 0;
}
