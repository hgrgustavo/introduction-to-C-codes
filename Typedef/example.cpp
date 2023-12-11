#include <stdio.h>
#include <string.h>
typedef struct books
{
	char title[50];
	char author[50];
	char subject[50];
	int id_book;
}Book;
int main() {
	Book book;
	strcpy_s(book.title, "C Programming");
	strcpy_s(book.author, "Nuha Ali");
	strcpy_s(book.subject, "C Programming Tutorial");
	book.id_book = 6495407;
	printf("\nBook title: %s", book.title);
	printf("\nBook author: %s", book.author);
	printf("\nBook subject: %s", book.subject);
	printf("\nBook ID: %d", book.id_book);
}