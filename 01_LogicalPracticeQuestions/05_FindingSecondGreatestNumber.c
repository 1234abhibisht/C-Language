#include <stdio.h>
int countnumber(int a)
{
    int count = 0;
    while (a != 0)
    {
        a = a / 10;
        count++;
    }
    return count;
}
void Secondgreatest(int n, int num[])
{
    int great = num[0];
    int secondgreat = num[1];
    int x;
    if (secondgreat > great)
    { /* swapped great and secondgreat */
        x = great;
        great = secondgreat;
        secondgreat = x;
    }
    for (int i = 2; i <= countnumber(n) - 1; i++)
    {
        if (num[i] > great)
        {
            secondgreat = great;
            great = num[i];
        }
        else if (num[i] < great && num[i] > secondgreat)
        {
            secondgreat = num[i];
        }
    }
    printf("Second Greatest number is : %d", secondgreat);
}
int main()
{
    /* I have asked user a number of any digit and stored it in a variable named n*/
    int n;
    printf("Enter your numbers : ");
    scanf("%d", &n);
    int lastdigit = 0;
    int a = n; /* as n will be 0 after n = n / 10*/
    int x = countnumber(n);
    /* now I have counted number of digits in the number and made an array having containers
       according to the number of digits */
    int num[x];
    for (int i = x - 1; i >= 0; i--)
    {
        lastdigit = n % 10;
        num[i] = lastdigit;
        n = n / 10;
    }
    Secondgreatest(a, num);
    return 0;
}
