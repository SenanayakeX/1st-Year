#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number;
  char name[10];
  int no;
	char status[10];
	int days=0;

	FILE *fptr;
  FILE *i;

	fptr = fopen("attendance.dat", "w");

  if(fptr == NULL)
  {
    printf("Can not open the file!\n");
    return -1;
  }

	for(int x=0;x<2;x++)
	{	
		printf("Employee number : ");
		scanf("%d", &number);
		printf("Name : ");
		scanf("%s", name);
		printf("Attendance status(1/0) : ");
		scanf("%s", status);
		
		fprintf(fptr, "%d\t %s\t %s\n", number,name,status);
	}

	fclose(fptr);

  fptr = fopen("attendance.dat", "a+");

  if(fptr == NULL)
  {
    printf("Can not open the file!\n");
    return -1;
  }
  
  printf("\nEnter employee number you want to check : ");
  scanf("%d", &no);

  fscanf(fptr, "%d\t %s\t %s", &number,name,status);

  while(!feof(fptr))
  {
    if(no == number)
    {
      for(int y=0;y<10;y++)
      {
        if(status[y] == '1')
        {
          days++;
        }
      }
    }
    fscanf(fptr, "%d\t %s\t %s", &number,name,status);
  }
   
  printf("Number of days empolyee number %d reported to work is %d\n\n", no,days);

  fclose(fptr);

return 0;
}