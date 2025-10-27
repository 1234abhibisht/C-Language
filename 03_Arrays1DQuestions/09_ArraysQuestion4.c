/* count the sum of triplets whose sum is equal to the given value x input from user */

/* if we have considered pair (1,2,3) so (2,1,3) will not be considered
                              (2,3,4) si (2,4,3) will also not be considered
   ex - if elements are 1 2 3 4 5 6
         pairs would be = (1,2,3) (1,2,4) (1,2,5) (1,2,6) (1,3,4) ....
                          (2,3,4) (2,3,5)  and so on*/

#include <stdio.h>
void question(int arr[], int n, int a)
{
    int count = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            for (int k = j + 1; k <= n - 1; k++)
            {
                if (arr[i] + arr[j] + arr[k] == a)
                {
                    printf("(%d,%d,%d)\n", arr[i], arr[j], arr[k]);
                    count++;
                }
            }
        }
    }
    printf("Pairs having sum equal to %d are %d\n", a, count);
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