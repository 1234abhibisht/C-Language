#include <stdio.h>
#include <string.h>
struct Program
{
    char name[20];
    enum Status
    {
        running,
        pending,
        done
    } status;
};
int main()
{
    struct Program a;
    strcpy(a.name, "Task Manager");
    a.status = pending;
    printf("%s -> %d\n", a.name, a.status);
    return 0;
}