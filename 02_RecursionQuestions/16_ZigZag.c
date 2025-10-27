/* if input = 1  ->  output = 1 1 1
      input = 2  ->  output = 2 1 1 1 2 1 1 1 2
      input = 3  ->  output = 3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 1 1 1 3 */

#include <stdio.h>
void preInPost(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d ", n);
    preInPost(n - 1);
    printf("%d ", n);
    preInPost(n - 1);
    printf("%d ", n);
    return;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    preInPost(n);
    return 0;
}