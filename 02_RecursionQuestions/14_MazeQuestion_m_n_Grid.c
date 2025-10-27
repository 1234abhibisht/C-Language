#include <stdio.h>
/* cc = current column, cr = current row, ec = end column, er = end row 
   initially cc = 1, cr = 1, 
   and er = m, ec = n always */
int maze(int cr, int cc, int er, int ec)
{
    if (cr == er && cc == ec)
    {
        return 1;
    }
    int right = 0;
    int down = 0;
    if (cr == er)
    {
        right = maze(cr, cc + 1, er, ec);
    }
    else if (cc == ec)
    {
        down = maze(cr + 1, cc, er, ec);
    }
    else if (cr < er && cc < ec)
    {
        right = maze(cr, cc + 1, er, ec);
        down = maze(cr + 1, cc, er, ec);
    }
    int totalways = right + down;
    return totalways;
}
int main()
{
    int m;
    printf("Enter horizontal rows : ");
    scanf("%d", &m);
    int n;
    printf("Enter vertical columns : ");
    scanf("%d", &n);
    printf("Total number of ways are %d", maze(1, 1, m, n));
    return 0;
}