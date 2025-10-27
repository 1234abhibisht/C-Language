/* if we have elements from 1 to n, and having total of n + 1 elements, one element is duplicate
   i.e -> 1,2,3,3,4,5  we have 6 elements from 1 to 5 */

#include <stdio.h>
#include <stdlib.h>
int duplicateElement(int arr[], int n)
{
    /* sum of all elemets for array */
    int sumElements = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        sumElements += arr[i];
    }

    /* sum of first (n - 1) elements, as we have total n elements in array */
    int sumFirstN = ((n - 1) * ((n - 1) + 1)) / 2;

    /* subtract sum of first (n - 1) elements from sum of all elements */
    int duplicate = sumElements - sumFirstN;
    return duplicate;
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

    printf("Duplicate element is %d\n", duplicateElement(arr, n));

    free(arr);
    arr = NULL;
    return 0;
}