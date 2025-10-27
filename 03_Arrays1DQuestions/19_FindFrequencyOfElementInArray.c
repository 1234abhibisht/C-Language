#include <stdio.h>
int frequencyOfElement(int arr[], int n, int a)
{
    int frequency = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] == a)
        {
            frequency++;
        }
    }
    return frequency;
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
    printf("Enter a number to check it's frequency in array : ");
    scanf("%d", &a);
    printf("Frequency of %d is %d\n", a, frequencyOfElement(arr, n, a));
    return 0;
}