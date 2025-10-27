#include <stdio.h>
/* for three points (x1,y1), (x2,y2), (x3,y3) to be collinear
   x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2) = 0 */
void collinear(int arr1[], int arr2[], int arr3[])
{
    int y1 = arr2[1] - arr3[1];
    int y2 = arr3[1] - arr1[1];
    int y3 = arr1[1] - arr2[1];
    int result = arr1[0] * y1 + arr2[0] * y2 + arr3[0] * y3;
    if (result == 0)
    {
        printf("(%d,%d) (%d,%d) (%d,%d) are collinear", arr1[0], arr1[1], arr2[0], arr2[1], arr3[0], arr3[1]);
    }
    else
    {
        printf("(%d,%d) (%d,%d) (%d,%d) are not collinear", arr1[0], arr1[1], arr2[0], arr2[1], arr3[0], arr3[1]);
    }
    return;
}
int main()
{
    int arr1[2];
    printf("Enter first points of x and y axis : ");
    for (int i = 0; i <= 1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    int arr2[2];
    printf("Enter second points of x and y axis : ");
    for (int j = 0; j <= 1; j++)
    {
        scanf("%d", &arr2[j]);
    }
    int arr3[2];
    printf("Enter third points of x and y axis : ");
    for (int k = 0; k <= 1; k++)
    {
        scanf("%d", &arr3[k]);
    }
    collinear(arr1, arr2, arr3);
    return 0;
}
