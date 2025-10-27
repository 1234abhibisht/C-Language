/* in this method we will use technique of selection sort */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void smallestElement(int arr[], int n, int k)
{
    /* outer loop will run k times, after Kth pass, Kth smallest element will be in Kth
       position having index (k - 1) */
    for (int i = 0; i <= k - 1; i++)
    {
        int min = INT_MAX;
        int minidx = -1;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minidx = j;
            }
        }
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
    }

    printf("%dth smallest element is %d\n", k, arr[k - 1]);
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

    int k;
    printf("Enter k : ");
    scanf("%d", &k);

    smallestElement(arr, n, k);

    free(arr);
    arr = NULL;
    return 0;
}