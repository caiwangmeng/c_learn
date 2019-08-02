#include <stdio.h>
#include <string.h>

//typedef unsigned char BYTE;

typedef struct Books{
    char title[50];
    char author[30];
    char subject[100];
    int book_id;
} Book;

void printBook(Book);

void main(void){
    Book book;
    strcpy(book.title, "jisuanji kexuedaolun");
    strcpy(book.author, "caiwm");
    strcpy(book.subject, "Java");
    book.book_id = 12;
    printBook(book);
}

void printBook(Book book){
    printf("Book:\ntitle:%s\nauthor:%s\nsubject:%s\nbook_id:%d\n", book.title, book.author, book.subject, book.book_id);
}