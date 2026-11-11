#include <stdio.h>
#include <string.h>

int main(void) {
    struct Product {
        int code;
        char name[70];
        float price;
        int quantity_in_stock;
    };

    struct Product product;

    printf("Enter the product code: ");
    scanf("%d", &product.code);

    printf("Enter the product name: ");
    getchar();
    fgets(product.name, sizeof(product.name), stdin);
    product.name[strcspn(product.name, "\n")] = '\0';

    printf("Enter the product price: ");
    scanf("%f", &product.price);

    printf("Enter the quantity in stock: ");
    scanf("%d", &product.quantity_in_stock);

    float total_value = product.price * product.quantity_in_stock;

    printf("\nProduct Details:\n");
    printf("Product Code: %d\n", product.code);
    printf("Product Name: %s\n", product.name);
    printf("Product Price: %.2f\n", product.price);
    printf("Quantity in Stock: %d\n", product.quantity_in_stock);
    printf("Total Value of Stock: %.2f\n", total_value);

    return 0;
}

