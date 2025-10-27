#include <stdio.h>
/* if it was monday on 01/01/0001, then which day would be on 01/01/year, where year is input by user */

int main()
{
    int n;
    printf("Enter year : ");
    scanf("%d",&n);
    /* now we will calculate no of years passed before nth year */
    long yearPassed = n - 1;
    /* we will calculate no of days from normal years which have passed before nth year */
    long normaldays = (yearPassed) * 365;
    /* we will calculate no of days from leap years which have passed before nth year 
       as each leap year adds 1 extra day */
    long leapdays = (yearPassed) / 4 - (yearPassed) / 100 + (yearPassed) / 400;
    long totaldays = normaldays + leapdays;
    /* since 01/01/0001 was Monday */
    int days = totaldays % 7;  /* int days is used as index of days of weeks of entered year
                                  as 1 week have 7 days*/
    /* now we will create a string array */
    const char *weekdays[7] = {
        "Monday",       /* index 0*/
        "Tuesday",     /* index 1*/
        "Wednesday",   /* index 2*/
        "Thrusday",    /* and so on*/
        "Friday",
        "Saturday",
        "Sunday",
    };
    printf("1 January %d is %s",n,weekdays[days]);
    return 0;
}
