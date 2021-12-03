#include <stdio.h>
int main()
{
	char type,moreC;
	float fees;
	int Tstudent = 0,studentH = 0,studentM = 0,studentF = 0;

	while(Tstudent != 100)
	{		
		printf("Enter the type of the course: ");
		scanf(" %c", &type);

		if(type == 'H' || type == 'h')
		{
			studentH = studentH +1;
		}
		else if(type == 'M' || type == 'm')
		{
			studentM = studentM +1;
		}
		else if(type == 'F' || type == 'f')
		{
			studentF = studentF +1;
		}
		else
		{
			printf("\tError!....Please enter valid course type\n");
		}

		printf("Are there any registration(Y/N)? ");
		scanf(" %c", &moreC);

		if(moreC == 'n' || moreC == 'N')
		{
			break;
		}
		else if(moreC == 'y' || moreC == 'Y')
		{
			continue;
		}
		else
		{
			printf("\tInvalid answer!...\n");
			printf("Are there any registration(Y/N)? ");
                	scanf(" %c", &moreC);

        	        if(moreC == 'n' || moreC == 'N')
        	        {
                	       	break;
            		}	
          		else if(moreC == 'y' || moreC == 'Y')
       		 	{
                     		continue;
               		}
		}
	}
	puts("\n---------------------------------------------");
	printf("Total number of registration student : %d\n", (studentH + studentM + studentF));
	puts("\n---------------------------------------------");
	printf("Number of students registration for Hospitality : %d\n", studentH);
	printf("Number of students registration for Marketing   : %d\n", studentM);
	printf("Number of students registration for Finance     : %d\n", studentF);
	puts("\n---------------------------------------------");
	printf("Total registration fees for Hospitality : %.2f\n", (studentH * 1500.0));
	printf("Total registration fees for Marketing   : %.2f\n", (studentM * 2000.0));
	printf("Total registration fees for Finance     : %.2f\n\n", (studentF * 2500.0));
	
return 0;
}
