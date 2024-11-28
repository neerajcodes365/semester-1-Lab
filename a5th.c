#include <stdio.h>
int main()
{

    int product_code;
    float quantity, total_price;

    printf("Product Code = ");

    scanf("%d", &product_code);
    printf("Quantity = ");

    scanf("%f", &quantity);

    switch (product_code)
    {
    case 1:

        total_price = quantity * 10;
        break;

    case 2:

        total_price = (quantity * 15) + ((quantity * 15)/20);
        break;

    case 3:

        total_price = quantity * 5;
        break;

    case 4:

        total_price = (quantity * 3) +((quantity * 3)/20);
        break;

    case 5:

        total_price = quantity * 12;
        break;

    default:

        printf("Invalid code. Enter a valid code in between 1 to 5.");
        break;
    }

    printf("Total Price = %f", total_price);

    return 0;
}