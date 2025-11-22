#include <stdio.h>
enum Traffic {red, yellow, green};
int main() {
    enum Traffic light = green;
    switch (light)
    {
        case red : printf("Stop\n");
        break;
        case yellow : printf("Wait\n");
        break;
        case green : printf("Go\n");
    }
    return 0;
}