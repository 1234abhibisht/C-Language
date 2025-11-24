/* dynamically increasing array size as user keeps on entering elements */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size = 2;     /* initially array can store two elements */
    int elements = 0; /* intial elements stored */
    int *arr = (int *)malloc(size * sizeof(int));
    /* we have just reserved the memory, not given any input in array */

    if (arr == NULL)
    {
        printf("Memory allocation failed");
        return 1;  // or exit(1)
    }

    printf("Enter your array : ");
    while (1)
    {
        int value;
        scanf("%d", &value);
        if (value == -1)
        {
            break;
        }
        if (size == elements)
        {
            size *= 2;
            arr = realloc(arr, size * sizeof(int));
            if (arr == NULL)
            {
                printf("Memory reallocation failed");
                return 1;  // or exit(1)
            } 
        }
        arr[elements] = value;
        elements++;
    }

    for (int i = 0; i <= elements - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
    arr = NULL;
    return 0;
}
