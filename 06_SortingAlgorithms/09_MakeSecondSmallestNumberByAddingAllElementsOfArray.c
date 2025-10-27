/* if we have an array -> 1,2,4,3,5
   add all elements, such that 12435, and find second smallest number */

/* Algorithm -> if we sort the array, we will get smallest number 12345,
   then if we swap last two digits of array, we will get second smallest number */

/* cases of handle - but if we have last two digits identical, the swapping them will lead to
   the same number, so in this case we need to swap second last and third last number */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int secondSmallestNumber(int arr[], int n)
{
    /* first we will sort the array */
    for (int i = 0; i <= n - 2; i++)
    {
        bool flag = true;
        for (int j = 0; j <= n - 2 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = false;
            }
        }
        if (flag == true)
        {
            break;
        }
    }

    /* now swap last two elements, while checking the condition */
    if (arr[n - 1] != arr[n - 2])
    {
        /* swap last two elements */
        int temp = arr[n - 1];
        arr[n - 1] = arr[n - 2];
        arr[n - 2] = temp;
    }
    else
    {
        /* swap scond last and third last elements */
        int temp = arr[n - 2];
        arr[n - 2] = arr[n - 3];
        arr[n - 3] = temp;
    }

    /* now make number from this modified array */
    int r = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        r = r * 10;
        r = r + arr[i];
    }
    return r;
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

    printf("Second smallest number made using elements of array is %d\n", secondSmallestNumber(arr, n));

    free(arr);
    arr = NULL;
    return 0;
}