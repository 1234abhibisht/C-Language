/* Design a C program to represent the configuration of smart-home devices.
You should use “typedef struct” named Device with following members
Members
char name[20]
enum Status{OFF=0, ON=1} status
A bit-field struct inside it with
unsigned int wifi : 1
unsigned int bluetooth : 1
unsigned int powerSave : 1
Write a function toggle(Device *d) that will toggle the device status as ON or OFF
Create instances of three devices with different configurations and show it as an output using printf

Here toggle means, if status of ON make it OFF and if status is OFF make in ON */

#include <stdio.h>
#include <string.h>
typedef struct Device
{
    char name[20];
    enum Status
    {
        OFF,
        ON
    } Status;
    struct Features
    {
        unsigned int wifi : 1;
        unsigned int bluetooth : 1;
        unsigned int powersave : 1;
    } features;
} Device;

int toggle(Device *d)
{ /* pointer function */
    if (d->Status == ON)
    {
        d->Status = OFF;
    }
    else if (d->Status == OFF)
    {
        d->Status = ON;
    }
    return d->Status;
}

int main()
{
    Device device1 = {"Smart Phone", ON, {1, 1, 0}};
    Device device2 = {"Air Conditioner", OFF, {0, 0, 1}};
    Device device3 = {"Fan", ON, {0, 1, 0}};

    int x = toggle(&device1);
    printf("---------Device 1----------\n");
    printf("Name : %s\n", device1.name);
    printf("Wifi : %d\n", device1.features.wifi);
    printf("Bluetooth : %d\n", device1.features.bluetooth);
    printf("Powersave : %d\n", device1.features.powersave);
    if (x == ON)
    {
        printf("Status : ON\n");
    }
    else if (x == OFF)
    {
        printf("Status : OFF\n");
    }

    return 0;
}