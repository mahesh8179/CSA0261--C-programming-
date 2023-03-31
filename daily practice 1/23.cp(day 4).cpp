#include <stdio.h>
#include <string.h>

typedef union {
    float f;
    int i;
} price;

struct product {
    char name[50];
    price p;
    int quantity;
};

int main() {
    struct product prod;
    float price_f;
    int price_i;

    printf("Enter product name: ");
    fgets(prod.name, sizeof(prod.name), stdin);
    prod.name[strcspn(prod.name, "\n")] = 0; // remove newline character

    printf("Enter price (as floating point number): ");
    scanf("%f", &price_f);
    prod.p.f = price_f;

    printf("Enter price (as integer number): ");
    scanf("%d", &price_i);
    prod.p.i = price_i;

    printf("Enter quantity: ");
    scanf("%d", &prod.quantity);

    float total_cost = prod.p.f * prod.quantity;
    printf("Total cost of %s (quantity: %d) is %.2f\n", prod.name, prod.quantity, total_cost);

    return 0;
}

