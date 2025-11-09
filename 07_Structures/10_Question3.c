/* Create a structure to specify data on students with therse attributes: Roll number, Name,
   Course, Year of joining. Create 2 structure variables. Now, create a function to check if
   two students have the same Course. Pass the two structure variable as input to this function */

#include <stdio.h>
#include <string.h>
struct studentData
{
    char name[40];
    int rollNumber;
    char course[40];
    int yearOfJoining;
};

void checkData(struct studentData stu1, struct studentData stu2)
{
    if (strcmp(stu1.course, stu2.course) == 0)
    {
        printf("Same course");
    }
    else
    {
        printf("Not same course");
    }
}

int main()
{
    struct studentData stu1;
    printf("Enter name of first student : \n");
    fgets(stu1.name, 40, stdin);
    stu1.name[strcspn(stu1.name, "\n")] = '\0';

    printf("Enter rollnumber of fist student : \n");
    scanf("%d", &stu1.rollNumber);
    getchar(); /* clear leftover new line */

    printf("Enter course of first student : \n");
    fgets(stu1.course, 40, stdin);
    stu1.course[strcspn(stu1.course, "\n")] = '\0';

    printf("Enter year of joining of first student : \n");
    scanf("%d", &stu1.yearOfJoining);
    getchar();

    struct studentData stu2;
    printf("Enter name of second student : \n");
    fgets(stu2.name, 40, stdin);
    stu2.name[strcspn(stu2.name, "\n")] = '\0';

    printf("Enter rollnumber of second student : \n");
    scanf("%d", &stu2.rollNumber);
    getchar();

    printf("Enter course of second student : \n");
    fgets(stu2.course, 40, stdin);
    stu2.course[strcspn(stu2.course, "\n")] = '\0';

    printf("Enter year of joining of second student : \n");
    scanf("%d", &stu2.yearOfJoining);
    getchar();

    checkData(stu1, stu2);
    return 0;
}