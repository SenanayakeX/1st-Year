#include <stdio.h>
int main()
{
	char colour;
	char arr[4][4]; //array declaration
	int x,y;

	//Input colours to panel
	for(x=0;x<4;x++)
	{
		for(y=0;y<4;)
		{
			printf("Enter the colours of the LED bulbs(R/G/B): ");
			scanf(" %c",&colour);
		
			if(colour == 'R')
			{
				arr[x][y] = colour;
				y++;
			}
			else if(colour == 'G')
			{
				arr[x][y] = colour;
				y++;
			}
			else if(colour == 'B')
			{
				arr[x][y] = colour;
				y++;
			}
			else
			{
				printf("\tError!...Enter the valid colour as a answer.\n");
			}	
		}
		printf("\n");
	}	

	//Display colours of LED panel
	printf(".....LED Panel.....\n");
	for(x=0;x<4;x++)
	{
		for(y=0;y<4;y++)
		{
			printf("%c ",arr[x][y]);
		}
		printf("\n");
	}

	//Display red colour bulbs positions
	printf("\n.....Red LED bulb positions.....\n");
	for(x=0;x<4;x++)
	{
		for(y=0;y<4;y++)
		{
			if(arr[x][y] == 'R')
			{
				printf(" [%d,%d] ",x,y);
			}
		}
	}
	printf("\n\n\n");


return 0;
}
