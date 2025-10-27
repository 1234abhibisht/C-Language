#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void sumTwoNumbers(int arr[], int i, int j, int a)
{
    /* using two pointer algorithm, in a sorted array */
    while (i < j)
    {
        if (arr[i] + arr[j] == a)
        {
            printf("Two number whose sum is %d are (%d,%d)\n", a, arr[i], arr[j]);
            break;
        }
        else if (arr[i] + arr[j] > a)
        {
            j--;
        }
        else
        {
            i++;
        }
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

    /* sort array using bubble sort */
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

    int a;
    printf("Enter sum number : ");
    scanf("%d", &a);

    sumTwoNumbers(arr, 0, n - 1, a);

    free(arr);
    arr = NULL;
    return 0;
}