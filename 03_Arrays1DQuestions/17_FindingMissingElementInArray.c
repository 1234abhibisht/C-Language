/* given an array containing elements from 1 to n except one element in this range is missing
   find the missing element */

#include <stdio.h>
void missingElement(int arr[], int n)
{
    /* sum of all elements till n = (n * (n + 1)) / 2 */
    int sum1 = (n * (n + 1)) / 2;
    /* sum of all elements of array input by user */
    int sum2 = 0;
    for (int i = 0; i <= n - 2; i++)
    {
        sum2 = sum2 + arr[i];
    }
    /* subtract sum2 from sum1, we will get missing element */
    int missingElement = sum1 - sum2;
    printf("Missing element is %d\n", missingElement);
    return;
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your array : ");
    /* we know we have elements from 1 to n and one element is missing, so technically we have
      n - 1 elements, so index will be from 0 to n - 2 */
    for (int i = 0; i <= n - 2; i++)
    {
        scanf("%d", &arr[i]);
    }
    missingElement(arr, n);
    return 0;
}