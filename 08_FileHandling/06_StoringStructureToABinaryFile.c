/* If we want a file in which we want to constantly update things, we use binary file instead of
   normal file */


/* create a program that asks user, their name, phone number, email and store then in a structure,
   and store that structure inside a binary file */

#include <stdio.h>
#include <string.h>
typedef struct ContactBook {
    char name[20];
    char phnum[10];
} ContactBook;

int main() {
    struct ContactBook user1;
    printf("Enter your name : ");
    fgets(user1.name, 20, stdin);
    user1.name[strcspn(user1.name, "\n")] = '\0';

    printf("Enter phone number : ");
    fgets(user1.phnum, 10, stdin);
    user1.phnum[strcspn(user1.phnum, "\n")] = '\0';

    FILE* f = fopen("BinaryContact.txt","ab");
    if(f == NULL) {
        perror("fopen");
        return 1;
    }

    fwrite(&user1, sizeof(user1), 1, f);

    fclose(f);
    return 0;
}
