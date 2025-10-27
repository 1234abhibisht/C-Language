/* given an array of integers, change the value of all odd indexed elements to its second multiple
   and increment all even indexed value by 10 */

#include <stdio.h>
void questionSolution(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        if (i % 2 != 0)
        { /* array is odd */
            arr[i] = arr[i] * 2;
        }
        else
        { /* array is even */
            arr[i] = arr[i] + 10;
        }
    }
    return;
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
    questionSolution(arr, n);
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}