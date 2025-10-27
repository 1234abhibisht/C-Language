/* price for electricity in Dehradun is 
   3.40 ruppees perunit for first 100 unit
   4.30 ruppees perunit for next 101-200 unit
   6.70 ruppees perunit for 201-400 unit and 
   7.35 ruppees perunit for over 400 unit*/
   
#include <stdio.h>
void UnitsPrice(int units) {
    if(units <= 100) {
        float a = units * 3.40;
        printf("Your price is ruppees : %f",a);
    }
    else if(units > 100 && units <= 200) {
        float first_100_units_charge = 100 * 3.40;
        float remaining_unit =  units - 100;
        float extracharge = remaining_unit * 4.30;
        float toatalcharge = first_100_units_charge + extracharge;
        printf("Your price is ruppees : %f",toatalcharge);
    }
    else if(units > 200 && units <= 300) {
        float first_100_units_charge = 3.40 * 100;  /* 340 */
        float first_200_unit_charge = first_100_units_charge + 4.30 * 100;  /* 340 + 430 = 770 */
        float remaining_unit1 =  units - 200;  
        float extracharge1 = remaining_unit1 * 6.70; 
        float totalcharge1 = first_200_unit_charge + extracharge1;  /* extracharge + 770 */
        printf("Your price is ruppees : %f",totalcharge1);
    }
    else if(units > 300 && units <= 400) {
        float first_200_unit_charge = 770;
        float first_300_unit_charge = first_200_unit_charge + 6.70 * 100;  /* 1440 */
        float remaining_unit2 = units - 300;
        float extracharge2 = remaining_unit2 * 6.70;
        float totalcharge2 = first_300_unit_charge + extracharge2;
        printf("Your price is ruppees : %f",totalcharge2);
    }
    else if(units > 400) {
        float first_300_unit_charge = 1440;
        float first_400_unit_charge = first_300_unit_charge + 670;  /* 2110 */
        float remaining_unit3 = units - 400;
        float extracharge3 = remaining_unit3 * 7.35;
        float totalcharge3 = first_400_unit_charge + extracharge3;
        printf("Your price is ruppees : %f",totalcharge3);
    }
}   
int main() {
    int units;
    printf("Enter number of units you have used : ");
    scanf("%d",&units);
    UnitsPrice(units);
    return 0;
}
