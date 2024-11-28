#include <stdio.h>
int main()
{

    float total_price, quantity;
    int product_code;

    printf("Product code =");
    scanf("%d", &product_code);

    if (product_code == 1)
    {
        printf("Quantity = ");
        scanf("%f", &quantity);
        total_price = 10 * quantity;
        printf("total price = %f", total_price);
    }

    if (product_code == 2)
    {
        printf("Quantity = ");
        scanf("%f", &quantity);
        total_price = 15 * quantity;
        printf("total price = %f", total_price);
    }

    if (product_code == 3)
    {
        printf("Quantity = ");
        scanf("%f", &quantity);
        total_price = 5 * quantity;
        printf("total price = %f", total_price);
    }

    if (product_code == 4)
    {
        printf("Quantity = ");
        scanf("%f", &quantity);
        total_price = 3 * quantity;
        printf("total price = %f", total_price);
    }

    if (product_code == 5)
    {
        printf("Quantity = ");
        scanf("%f", &quantity);
        total_price = 12 * quantity;
        printf("total price = %f", total_price);
    }

    return 0;
}