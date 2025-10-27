/* print sum of series 1 + 3/4 + 5/6 + 7/8.... upto n terms
   the value of n will be considered from 3/4
   1 will not be considered in n, it is added as seperate value */

#include <stdio.h>
void seriessum(int n)
{
    int arr1[n]; /* this array is to store numerator values */
    int x = 0;
    for (int i = 3; i <= (n * 2) + 1; i = i + 2)
    {
        arr1[x] = i;
        x++;
    }
    int arr2[n]; /* this array is to store denominator values */
    int y = 0;
    for (int j = 4; j <= (n * 2) + 2; j = j + 2)
    {
        arr2[y] = j;
        y++;
    }
    float sum = 1;
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
