#include <stdio.h>

int main() {
    char book_name[50];
    float book_price;
    int book_number;

    printf("Enter book name: ");
    scanf("%s", book_name);

    printf("Enter book price: ");
    scanf("%f", &book_price);

    printf("Enter book number: ");
    scanf("%d", &book_number);

    printf("Book Name: %s\n", book_name);
    printf("Book Price: %.2f\n", book_price);
    printf("Book Number: %d\n", book_number);

    return 0;
}