#include <stdio.h>
int main()
{
	char name[20],pname[20];
	int loyaltyNo,ployaltyNo;
	int flag = 0;
	
	FILE *fptr;	

	printf("Enter Name : ");
	scanf(" %s", &name);

	printf("Enter loyalty No : ");
	scanf("%d", &loyaltyNo);

	//open file to check for information
	fptr = fopen("loyalty.dat", "a+");

	//check whether information available
	if(fptr == NULL)
	{
		printf("File can't be open!\n");
	}
	else
	{
		fscanf(fptr, "%d %s\n", &ployaltyNo,pname); 

		while(!feof(fptr))
		{
			if(loyaltyNo == ployaltyNo)
			{
				flag = 1;
			}
			fscanf(fptr, "%d %s\n", &ployaltyNo,pname);
		}
		if(flag == 0)
		{
			fprintf(fptr, "%d %s\n", loyaltyNo,name);
		}
	}

	fclose(fptr);

return 0;
}
