/* in a array find an element which is unique while other numbers are in duplicate pairs
   e.g. -> 1 2 3 4 3 1 2 , order could be anything */
/* using XOR operator */

#include <stdio.h>
int uniqueElement(int arr[], int n)
{
    int unique = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        unique = unique ^ arr[i];
    }
    return unique;
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
    printf("Unique element in array is %d", uniqueElement(arr, n));
    return 0;
}