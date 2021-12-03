#include <stdio.h>
int main()
{ 
	int ratings[3][4];
	int x,y,r=0;
	float maxM,max=0;
	float avg=0;
	
	for(x=0;x<3;x++)
	{
		for(y=0;y<4;y++)
		{
			printf("Enter the movies %d ratings :  ", x+1);
			scanf("%d", &ratings[x][y]);
		}
		printf("\n");
	}

	for(x=0;x<3;x++)
	{
		printf("Movie %d\t", x+1);
		for(y=0;y<4;y++)
		{
			printf("\t%d", ratings[x][y]);
		}
		printf("\n");
	}

	for(x=0;x<3;x++)
	{
		for(y=0;y<4;y++)
		{
			r = r + ratings[x][y];
		}
		avg = r/4.00;
		
		if(avg < max)
		{
			max = max;
			
		}
		else
		{
			max = avg;
			maxM = x+1;			
		}
			
		printf("Average rating of the movie number %d is: %.2f\n", x+1,avg);
		r = 0;
		avg = 0;
	}	

	printf("Maximum average of ratings movie is %.2f\n",max);


return 0;
}
