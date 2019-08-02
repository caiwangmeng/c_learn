#include <stdio.h>
#include <string.h>

int main(void){
    struct Books{
        char title[50];
        char author[30];
        char subject[100];
        int book_id;
    } book;

//    book = {"xdfsfs", "caiwm", "hahhelosfs", 5};
//    book.title = "sfsdfds";
    strcpy(book.title, "asfdsfds");
    book.book_id = 5;
    printf("title: %s\nauthor: %s\nsubject: %s\nbook_id: %d\n", book.title, book.author, book.subject, book.book_id);

    return 0;

}