/* Create a Book structure containing book_id, title, author name and price. Write a C program to
pass a structure as a function argument and print the book details. */

#include <stdio.h>
#include <string.h>
typedef struct BookDetails
{
    int bookId;
    char title[40];
    char authorName[40];
} BookDetails;

void detailsPrint(BookDetails book1)
{
    printf("Bood id is %d\n", book1.bookId);
    printf("Book title is %s\n", book1.title);
    printf("Author of book is %s\n", book1.authorName);
    return;
}

int main()
{
    BookDetails book1;
    book1.bookId = 2934;
    strcpy(book1.title, "The Famous Five");
    strcpy(book1.authorName, "William Shakespere");

    detailsPrint(book1);
    return 0;
}
