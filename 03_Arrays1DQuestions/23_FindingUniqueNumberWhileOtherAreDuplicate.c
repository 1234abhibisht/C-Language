/* in a array find an element which is unique while other numbers are in duplicate pairs
   e.g. -> 1 2 3 4 3 1 2 , order could be anything */

#include <stdio.h>
void uniqueElement(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int flag = 0;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            printf("%d is unique number\n", arr[i]);
            break;
        }
    }
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
    uniqueElement(arr, n);
    return 0;
}
