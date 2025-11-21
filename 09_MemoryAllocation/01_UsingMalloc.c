/* reserving memeory for array using malloc */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Ente size of array : ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    /* always do a test case */
    if (arr == NULL)
    {
        printf("Failed to allocate memory");
        return 1;
    }

    printf("Enter array : ");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    arr = NULL;
    return 0;
}