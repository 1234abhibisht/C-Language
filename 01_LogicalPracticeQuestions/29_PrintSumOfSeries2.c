/* print sum of series 2/3 + 4/7 + 6/11.... upto n terms */

#include <stdio.h>
void seriessum(int n)
{
    int arr1[n]; /* this array is to store numerator values */
    int x = 0;
    for (int i = 2; i <= n * 2; i = i + 2)
    {
        arr1[x] = i;
        x++;
    }
    int arr2[n]; /* this array is to store denominator values */
    int y = 0;
    for (int j = 3; j <= (n * 4) - 1; j = j + 4)
    {
        arr2[y] = j;
        y++;
    }
    float sum = 0;
    for (int k = 0; k <= n - 1; k++)
    { /* this loop is for index of arrays */
        sum = sum + (float)arr1[k] / arr2[k];
    }
    printf("Approximate sum of series is %f", sum);
    return;
}
int main()
{
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);
    seriessum(n);
    return 0;
}
