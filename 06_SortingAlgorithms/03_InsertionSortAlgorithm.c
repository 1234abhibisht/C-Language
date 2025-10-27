#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &ptr[i]);
    }

    /* selection sort */
    for (int i = 0; i <= n - 2; i++)
    {
        int min = INT_MAX;
        int minidx = -1;
        for (int j = i; j <= n - 1; j++)
        {
            if (ptr[j] < min)
            {
                min = ptr[j];
                minidx = j;
            }
        }
        int temp = ptr[minidx];
        ptr[minidx] = ptr[i];
        ptr[i] = temp;
    }

    printf("Sorted array is : ");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);
    ptr = NULL;
    return 0;
}