#include <stdio.h>
#include <string.h>
struct customer
{
	int accNo;
	char name[10];
	char type;
	float amount;
};

int main()
{
	struct customer c[4];

	float totAmount = 0;
	float totDamount = 0;
	float totWamount = 0;
	float maxD = 0;
	float minW = 0;
	char maxDname[10];
	char minWname[10];

	for(int i=0;i<5;i++)
	{
		printf("Enter account number : ");
		scanf("%d", &c[i].accNo);

		printf("Enter your name : ");
		scanf("%s", c[i].name);

		printf("Enter transaction type : ");
		scanf(" %c", &c[i].type);

		printf("Enter your amount : ");
		scanf("%f", &c[i].amount);
	}

	for(int x=0;x<5;x++)
	{
		printf("Account number  : %d\n", c[x].accNo);
		printf("Name            : %s\n", c[x].name);
		printf("Transaction type: %c\n", c[x].type);
		printf("Amount          : %.2f\n", c[x].amount);
	}
	printf("\n");

	for(int a=0;a<5;a++)
	{
		if(c[a].type == 'D')
		{
			totDamount = totDamount + c[a].amount;
			if(maxD < c[a].amount)
			{
				maxD = c[a].amount;
				strcpy(maxDname, c[a].name);
			}
		}
		else
		{
			totWamount = totWamount + c[a].amount;
			if(minW > c[a].amount)
			{
				minW = c[a].amount;
				strcpy(minWname, c[a].name);
			}
		}
	}

	printf("Total deposit amount : %.2f\n", totDamount);
	printf("Total withdrawal amount : %.2f\n", totWamount);
	printf("Customer with maximum deposit : %s\n", maxDname);
	printf("customer with minimum withdrawal : %s\n", minWname);


		

return 0;
}
