 // C structures to prompt the user
#include<stdio.h>
#include<string.h>

struct Book {
    char title[30],author[30],ISBN[13];
    int pubYear;
    float price;
} book1;

int main(){
    printf("Enter the name of the book: ");
    scanf("%s",book1.title);
    printf("Enter the author of the book: ");
    scanf("%s",book1.author);
    printf("Enter the ISBN of the book: ");
    scanf("%s",book1.ISBN);
    printf("Enter the Year of publish of the book: ");
    scanf("%d",&book1.pubYear);
    printf("Enter the price of the book: ");
    scanf("%f",&book1.price);
    
    printf("\nTitle : %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("ISBN: %s\n", book1.ISBN);
    printf("PubYear: %d\n", book1.pubYear);
    printf("Price: %.2f\n", book1.price);
    
    return 0;
}
