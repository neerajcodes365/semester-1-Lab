#include <stdio.h>
int main()
{
    int code, per_unit;
    float total_price = 0, quantity, price;

    while (1)
    {
        printf("ENTER THE PRODUCT CODE BETWEEN 1-5.TO TERMINATE ENTER 0 : ");
        scanf("%d", &code);

        switch (code)
        {
        case 0:
            per_unit = 0;
            break;
        case 1:
            per_unit = 10;
            printf("QUANTITY = ");
            scanf("%f", &quantity);
            price = quantity * per_unit;
            break;
        case 2:
            per_unit = 15;
            printf("QUANTIY = ");
            scanf("%f", &quantity);
            price = quantity * per_unit;
            break;
        case 3:
            per_unit = 5;
            printf("QUANTITY = ");
            scanf("%f", &quantity);
            price = quantity * per_unit;
            break;
        case 4:
            per_unit = 3;
            printf("QUANTITY = ");
            scanf("%f", &quantity);
            price = quantity * per_unit;
            break;
        case 5:
            per_unit = 12;
            printf("QUANTITY = ");
            scanf("%f", &quantity);
            price = quantity * per_unit;
            break;
        default:
            printf("INVALID PRODUCT CODE!\n");
            break;
        }
        if (code == 0)
        {
            break;
        }
        else if (code > 5 || code < 0)
        {
            continue;
        }
        printf("PRODUCT CODE    UNIT PRICE    QUANTITY    PRICE\n");
        printf("     %d             %d           %f     %f\n", code, per_unit, quantity, price);
        total_price = total_price + price;
    }
    printf("TOTAL PRICE : %f\n", total_price);

    return 0;
}