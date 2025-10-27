/* Method - 1 */

/* 1) create an empty array and put non-zero elements to it
   2) now fill remaining elements with zeroes
*/

/* but there is a problem in this method, this method is not space efficient, as we are using
   extra array */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void zeroElement(int arr[], int n)
{
    /* create an empty array and put non-zero elements to it */
    int zero[n];
    int idx = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] != 0)
        {
            zero[idx] = arr[i];
            idx++;
        }
    }

    /* now fill remaining elements with zeroes */
    for (int i = idx; i <= n - 1; i++)
    {
        zero[i] = 0;
    }

    /* print resultant array */
    printf("Array with all zeroes at end is : ");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", zero[i]);
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