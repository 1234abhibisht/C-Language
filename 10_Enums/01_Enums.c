#include <stdio.h>
enum Weekday { sun, mon, tue, wed, thu, fri, sat };
/* by default, values in enums start from zero */
/* we can also assign our own values */

int main()
{
    enum Weekday today;
    today = wed;
    printf("%d", today);
    return 0;
}