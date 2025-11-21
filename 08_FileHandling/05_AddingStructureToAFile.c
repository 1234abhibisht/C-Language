/* create a structure and add its content in a file */

#include <stdio.h>
#include <string.h>
typedef struct ContactBook
{
    char name[20];
    char phnum[10];
} ContactBook;

int main()
{
    ContactBook user1;
    printf("Enter name : ");
    fgets(user1.name, 20, stdin);
    user1.name[strcspn(user1.name, "\n")] = '\0';

    printf("Enter phonenumber : ");
    fgets(user1.phnum, 10, stdin);
    user1.phnum[strcspn(user1.phnum, "\n")] = '\0';

    FILE *f = fopen("Contact.txt", "w");

    fprintf(f, "Name : %s\n" "Contact : %s",user1.name, user1.phnum);

    fclose(f);
    return 0;
}
