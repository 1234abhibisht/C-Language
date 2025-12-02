#include <stdio.h>
enum Traffic
{
    red = 1,
    yellow = 2,
    green = 3
};
int main()
{
    enum Traffic response;
    scanf("%d", (int *)&response);
    switch (response)
    {
    case red:
        printf("Stop\n");
        break;
    case yellow:
        printf("Wait\n");
        break;
    case green:
        printf("Go\n");
    }
    return 0;
}
