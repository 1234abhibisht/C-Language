#include <stdio.h>
void temperature(float a) {
    float Farenheit = a * (float)9 / 5 + 32;
    printf("Temperature in Farenheit is : %f",Farenheit);
}
int main() {
    float temp;
    printf("Enter temperature in Celsius : ");
    scanf("%f",&temp);
    temperature(temp);
    return 0;
}
