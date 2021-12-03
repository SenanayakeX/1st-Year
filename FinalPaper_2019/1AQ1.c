#include <stdio.h>
int main()
{
	int type,number;
	char size,credit,loyalty,online;
	float price,discount,Tprice,Tdiscount,Dprice;

	while(type != -1)
        {

		printf("Input the pizza type(1 or 2): ");
		scanf("%d", &type);
		
		printf("Input the pizza size(L or M): ");
		scanf(" %c", &size);

		printf("Input the number of pizzas: ");
		scanf("%d", &number);

		if((type == 1 || type == 2) && (size == 'L' || size == 'M'))
		{
			if(type == 1 && size == 'L')
			{	
				price = 1720.00;
			}
			else if(type == 1 && size == 'M')
			{
				price = 975.00;
			}
			else if(type == 2 && price == 'L')
			{
				price = 1820.00;
			}
			else
			{
				price = 1000.00;
			}
			Tprice = Tprice + (price*number); 	
			printf("Price is %.2f\n\n", Tprice);
		}
		else
		{
			printf("Error,Plz input valid type(1/2) and size(L/M)...\n\n");
		}
	}
	
	printf("Are you paying by credit card(Y/N) : ");
	scanf(" %c", &credit);

	printf("Are you a loyalty customer(Y/N)    : ");
	scanf(" %c", &loyalty);

	printf("Is this an online order(Y/N)       : ");
	scanf(" %c", &online);
	
	if(credit == 'Y' && loyalty == 'Y' && online == 'Y')
	{
		discount = 0.4;
	}
	else if(credit == 'Y' && loyalty == 'Y')
	{
		discount = 0.35;
	}
	else if(credit == 'Y' && online == 'Y')
	{
		discount = 0.25;
	}
	else if(loyalty == 'Y' && online == 'Y')
	{
		discount = 0.2;
	}
	else if(credit == 'Y')
	{
		discount = 0.2;
	}
	else if(loyalty == 'Y')
	{
		discount = 0.15;
	}
	else if(online == 'Y')
	{
		discount = 0.05;
	}
	else
	{	
		discount = 0.0;
	}
	
	Dprice = Tprice * discount;
	
	printf("\n\n_______-----BILL-----_______\n");
	printf("Total bill amount : %.2f\n", Tprice);
	printf("Discount          : %.2f\n", Dprice);
	printf("Net amount        : %.2f\n\n\n", (Tprice-Dprice));


return 0;
}
