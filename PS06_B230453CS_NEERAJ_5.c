#include <stdio.h>
int uprice;
float getPrice(int pcode, float qty)
	{
		float price;
		switch(pcode)
		{
			case 1: price = qty*10;
				uprice = 10;
				break;
			case 2: price = qty*15;
				uprice = 15;
				break;
			case 3: price = qty*5;
				uprice = 5;
				break;
			case 4: price = qty*3;
				uprice = 3;
				break;
			case 5: price = qty*12;
				uprice = 12;
				break;
		}
		return price;
	}


int main()
{
	
	int pcode;
	float qty, price, tprice=0;
	while(1)
	{
		printf("Enter product code between 1 to 5. To terminate enter 0 = ");
		scanf("%d", &pcode);
		if (pcode == 0)
			break;
		else if (pcode>0 && pcode<6)
		{
			printf("Quantity = ");
			scanf("%f", &qty);
			price = getPrice(pcode, qty);
			tprice += price;
			printf("Product code\tUnit price\tQuantity\tPrice\n");
			printf("\t%d\t\t%d\t%f\t%f\n", pcode, uprice, qty, price);
		}
		else
			printf("Please enter a valid product code.\n");
	}
	printf("Total Price = %f\n", tprice); 
	return 0;
}