#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);

    /* now I will take input in array using dynamic memory allocation */
    int *ptr = (int *)malloc(n * sizeof(int));
    printf("Enter your array : ");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &ptr[i]);
    }

    /* now I will sort array using bubble sort */
    for (int i = 0; i <= n - 2; i++)
    {
        bool flag = true;
        for (int j = 0; j <= n - 2 - i; j++)
        {
            if (ptr[j] > ptr[j + 1])
            {
                int temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
                flag = false;
            }
        }
        if (flag == true)
        {
            break;
        }
    }

    printf("Sorted array is : ");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", ptr[i]);
    }

    /* now free the allocated memory */
    free(ptr);

    /* now NULL the ptr pointer variable */
    ptr = NULL;
    return 0;
}