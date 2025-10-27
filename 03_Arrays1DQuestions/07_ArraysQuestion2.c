/* count the number of elements in given array greater than a given number x
   x is input from user */

#include <stdio.h>
int countNumber(int arr[], int n, int a)
{
    int count = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > a)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    printf("How many elements you want int your array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your array : ");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    int a;
    printf("Enter case number : ");
    scanf("%d", &a);
    int x = countNumber(arr, n, a);
    printf("Number of elements greater than %d are %d\n", a, x);
    /* transfering elements greater than a in another array */
    int ansArr[x];
    int idx = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > a)
        {
            ansArr[idx] = arr[i];
            idx++;
        }
    }
    /* printing array containing elements greater than a */
    printf("These elements are : ");
    for (int i = 0; i <= x - 1; i++)
    {
        printf("%d ", ansArr[i]);
    }
    return 0;
}