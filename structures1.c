// C structures
#include<stdio.h>
#include<string.h>

struct Book {
    char title[30];
    char author[30];
    int pubYear;
    char ISBN[13];
    float price;
} book1;

int main(){
    strcpy(book1.title,"Inroduction to C programming");
    strcpy(book1.author, "John Smith");
    strcpy(book1.ISBN, "9780131103627");
    book1.pubYear= 2022;
    book1.price =49.99;
    
    printf("Title: %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("ISBN: %s\n", book1.ISBN);
    printf("PubYear: %d\n", book1.pubYear);
    printf("Price: %f\n", book1.price);
    
    return 0;
}
