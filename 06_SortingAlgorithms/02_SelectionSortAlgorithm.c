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

    /* insertion sort */
    for (int i = 0; i <= n - 2; i++)
    {
        int j = i + 1;
        while (j >= 1 && ptr[j] < ptr[j - 1])
        {
            int temp = ptr[j];
            ptr[j] = ptr[j - 1];
            ptr[j - 1] = temp;
            j--;
        }
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