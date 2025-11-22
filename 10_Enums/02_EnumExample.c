#include <stdio.h>
enum Number
{
    one = 1,
    two = 2,
    three = 3,
};
int main()
{
    enum Number x;
    enum Number y;
    enum Number z;

    x = one;
    y = two;
    z = three;

    int sum = x + y;
    int diff = z - y;

    printf("%d\n", sum);
    printf("%d\n", diff);
    return 0;
}