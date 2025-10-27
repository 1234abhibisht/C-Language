/* find the total number of pairs in the array of different index whose sum is equal
   to the given value x */

/* if we have considered pair (1,2) so (2,1) will not be considered
   ex - if elements are 1 2 3 4
         pairs would be = (1,2) (1,3) (1,4)
                          (2,3) (3,4)  and so on*/

#include <stdio.h>
void question(int arr[], int n, int a)
{
    int count = 0;

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[i] + arr[j] == a)
            {
                printf("(%d,%d)\n", arr[i], arr[j]);
                count++;
            }
        }
    }
    printf("Pairs having sum equal to %d are %d", a, count);
    return;
}
int main()
{
    int n;
    printf("Enter how many elements you want to enter : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your array : ");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    int a;
    printf("Enter a value : ");
    scanf("%d", &a);
    question(arr, n, a);
    return 0;
}