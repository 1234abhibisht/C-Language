#include <stdio.h>
#include <stdbool.h>
void pallindromeArray(int arr[], int n)
{
    bool flag = true;
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            flag = false;
            break;
        }
        i++;
        j--;
    }
    if (flag == false)
    {
        printf("Array is not pallindrome\n");
    }
    else
    {
        printf("Array is pallindrome\n");
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
    pallindromeArray(arr, n);
    return 0;
}