/* Method - 2 */

/* use technique of bubble sort to send 0 to end, this method is optimised */

#include <stdio.h>
#include <stdlib.h>
void zeroElement(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = 0; j <= n - 2 - i; j++)
        {
            if (arr[i] == 0)
            {
                /* swap arr[i] with arr[i + 1] */
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    printf("Array with all 0's at end is : ");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return;
}
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);

    printf("Enter your array : ");
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    zeroElement(arr, n);

    free(arr);
    arr = NULL;
    return 0;
}