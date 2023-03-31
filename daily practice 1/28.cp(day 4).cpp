#include <stdio.h>

struct book {
    char title[100];
    char author[100];
    int publication_year;
};

int main() {
    struct book b;
    printf("Enter book title: ");
    scanf("%s", b.title);
    printf("Enter book author: ");
    scanf("%s", b.author);
    printf("Enter publication year: ");
    scanf("%d", &b.publication_year);
    printf("Book title: %s\n", b.title);
    printf("Book author: %s\n", b.author);
    printf("Publication year: %d\n", b.publication_year);
    return 0;
}

