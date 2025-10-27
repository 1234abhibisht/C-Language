#include <stdio.h>
#include <math.h>
int main()
{
    /* (i)cube + (j)cube = n
       (k)cube + (l)cube = n
       condition = i != k && j != l && i != l && j != k */
    for (int i = 0; i <= 20; i++)
    {
        for (int j = 0; j <= 20; j++)
        {
            int a = pow(i, 3) + pow(j, 3);
            for (int k = 0; k <= 20; k++)
            {
                for (int l = 0; l <= 20; l++)
                {
                    int b = pow(k, 3) + pow(l, 3);
                    if (a == b && i != k && i != l && j != k && j != l)
                    {
                        printf("%d\n", a);
                    }
                }
            }
        }
    }
    return 0;
}
