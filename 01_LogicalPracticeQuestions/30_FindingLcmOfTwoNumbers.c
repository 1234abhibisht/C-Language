#include <stdio.h>
/* this function is to calculate number of factors of a and b
    so that i can create exact same length of array
    e.g. as 4 has three factors so array with three contaners will be created */
void Lcm(int a, int b)
{
    /* I created an array and loop to store multiple of a*/
    int indexa = 0;
    int arra[10];
    for (int i = a; i <= a * 10; i = i + a)
    {
        arra[indexa] = i;
        indexa++;
    }
    /* I created an array and loop to store factors of b */
    int indexb = 0;
    int arrb[10];
    for (int j = b; j <= b * 10; j = j + b)
    {
        arrb[indexb] = j;
        indexb++;
    }
    for (int l = 0; l <= 10; l++)
    { /* index for arra and arrb */
        for (int m = 0; m <= 10; m++)
        {
            if (arra[l] == arrb[m])
            {
                printf("LCM of %d and %d is %d", a, b, arra[l]);
                return;
            }
        }
    }
}
int main()
{
    int a;
    printf("Enter first number : ");
    scanf("%d", &a);
    int b;
    printf("Enter second number : ");
    scanf("%d", &b);
    Lcm(a, b);
    return 0;
}
