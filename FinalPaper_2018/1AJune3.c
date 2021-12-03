#include <stdio.h>
#include <assert.h>
float calDiscount(int time, float totAmount);
void testCalDiscount();
void displayGift(float finalTot);
int main()
{
	

	int time;
	float amount;
	float total;
	testCalDiscount();	

	printf("Enter time : ");
	scanf("%d", &time);

	printf("Enter your amount : ");
	scanf("%f", &amount);

	

	total = amount - calDiscount(time,amount);

	printf("Your final amount is : %.2f\n", total);
	displayGift(total);

	
	return 0;
}
float calDiscount(int time, float totAmount)
{
	float discount;

	if(time >= 16 && time <= 19)
	{
		if(totAmount >= 5000)
		{
			discount = totAmount*0.1;
			return discount;
		}
		else if(totAmount >= 2500)
		{
			discount = totAmount*0.07;
			return discount;
		}
		else
		{
			discount = totAmount;
			return discount;
		}
	}
	else if(time >= 20 && time <= 22)
	{
		if(totAmount >= 5000)
		{
			discount = totAmount*0.12;
			return discount;
		}
		else if(totAmount >= 2500)
		{
			discount = totAmount*0.09;
			return discount;
		}
		else
		{
			discount = totAmount;
			return discount;
		}
	}
	else
	{
		discount = totAmount;
		return discount;
	}


}
void testCalDiscount()
{
	assert(calDiscount(16,40000.00)==4000.00);
	assert(calDiscount(21,3000)==270.00);
}
void displayGift(float finalTot)
{
	if(finalTot >= 7000)
	{
		printf("You have received packet of Milk\n");
	}
	else if(finalTot >= 5000)
	{
		printf("You have received 1 kg of Sugar packet\n");
	}
	else if(finalTot >= 3000)
	{
		printf("You have receivewd pack of 06 Eggs\n");
	}
	else
	{
		printf("No gift\n");
	}

}




