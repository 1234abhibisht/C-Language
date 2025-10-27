#include <stdio.h>
void numberCheck(int arr[], int n, int a)
{
    int flag = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] == a)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%d is present in array\n", a);
    }
    else
    {
        printf("%d is not present in array\n", a);
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
    int a;
    printf("Enter a number you want to check in array : ");
    scanf("%d", &a);
    numberCheck(arr, n, a);
    return 0;
}