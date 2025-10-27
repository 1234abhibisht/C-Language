Take Input Of Length And Breadth Of n Rectangles And Tell Which Has Greatest Perimeter 
#include <stdio.h>
int greatest(int arrGreat[], int n)
{
    int great = arrGreat[0];
    for (int k = 1; k <= n - 1; k++)
    {
        if (arrGreat[k] > great)
        {
            great = arrGreat[k];
        }
    }
    return great;
}
void Perimeter(int arrLength[], int arrBreadth[], int n)
{
    int arrPerimeter[n];
    for (int j = 0; j <= n - 1; j++)
    {
        arrPerimeter[j] = 2 * (arrLength[j] + arrBreadth[j]);
    }
    int x = greatest(arrPerimeter, n);
    for (int k = 0; k <= n - 1; k++)
    {
        printf("Perimeter of rectangle %d is %d\n", k + 1, arrPerimeter[k]);
    }
    printf("Hence, Greatest Perimeter is %d", x);
    return;
}
int main()
{
    int n;
    printf("How many rectangles you want to compare : ");
    scanf("%d", &n);
    int arrLength[n];
    printf("Enter lengths of your rectangle : ");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arrLength[i]);
    }
    int arrBreadth[n];
    printf("Enter breadths of your rectangle : ");
    for (int j = 0; j <= n - 1; j++)
    {
        scanf("%d", &arrBreadth[j]);
    }
    Perimeter(arrLength, arrBreadth, n);
    return 0;
}
