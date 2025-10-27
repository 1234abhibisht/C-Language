/* Conversion of seconds to hour:minute:second format */
#include <stdio.h>
void timeformat(int n) {
    /* 1min=60sec 1hour=60min 1hour=3600sec */
    float hour=n/3600;
    float minute=(n%3600/60);
    float sec=(n%3600)%60;
    printf("Time is %f hours : %f minutes : %f seconds",hour,minute,sec);
}
int main() {
    int n;
    printf("Enter time in seconds : ");
    scanf("%d",&n);
    timeformat(n);
    return 0;
}
