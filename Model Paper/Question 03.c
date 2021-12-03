#include <stdio.h>
int main()
{
  char pno[10];
  float local,international,roaming;
  float total = 0;

  FILE *fptr;
  fptr = fopen("charges.dat", "r");

  if(fptr == NULL)
  {
    printf("Can not read the file.\n");
    return -1;
  }

  for(int x=0;x<5;x++)
  {
    fscanf(fptr, "%s %f  %f  %f\n", pno,&local,&international,&roaming);
    printf("%s\n", pno);
    total = local + international + roaming;
    printf("Total charges is %.2f\n\n", total);  
  }
  
  
  fclose(fptr);
}