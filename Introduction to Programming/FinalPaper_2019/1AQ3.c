#include <stdio.h>
#include <assert.h>
#include <math.h>
float calcAnnualInterest(float interestRate, float amount);
float findTotalAmount(float interestRate, float amount);
void testTotalAmount();
int main()
{
	float amount,rate;
	float AnAmount = 0.0;
	int x;
	testTotalAmount();

	printf("Enter the amount to be you invested : ");
	scanf("%f", &amount);

	printf("Enter the annual interest rate      : ");
	scanf("%f", &rate);

	AnAmount = findTotalAmount(rate,amount);

	for(x=1;x<6;x++)
	{	
		printf("Amount after year %d : %.2f\n", x,AnAmount);
		AnAmount = findTotalAmount(rate, AnAmount);	
	}	

	return 0;
}

float calcAnnualInterest(float interestRate, float amount)
{
	float interest;
	
	if(amount > 1000000)
	{
		interest = amount * (interestRate+0.5)/100.0;
	}
	else
	{
		interest = amount * interestRate/100.0;
	}

	return interest;
}

float findTotalAmount(float interestRate, float amount)
{
	float totAmount;

	totAmount = calcAnnualInterest(interestRate, amount) + amount;

	return totAmount;
}

void testTotalAmount()
{
	assert(fabs(findTotalAmount(10,10000) - 11000.00) < 1);
	assert(fabs(findTotalAmount(20,5000) - 6000.00) < 1);
}
