#include <stdio.h>
void towerHanoi(int n, char s, char h, char d)
{
    /* s = source disc, h = helping disc, d = destination disc */
    if (n == 0)
    {
        return;
    }
    towerHanoi(n - 1, s, d, h);
    printf("%c -> %c\n", s, d);
    towerHanoi(n - 1, h, s, d);
    return;
}
int main()
{
    int n;
    printf("Enter number of discs : ");
    scanf("%d", &n);
    towerHanoi(n, 'A', 'B', 'C');
    return 0;
}