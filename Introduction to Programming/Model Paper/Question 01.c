#include <stdio.h>
int main()
{
  char type,pay,cont;
  int rooms,nights;
  float total=0,rate,Total=0;

  do
  {
    printf("Room type : ");
    scanf(" %c", &type);
    printf("Number of rooms : ");
    scanf("%d", &rooms);
    printf("Number of nights : ");
    scanf("%d", &nights);
    printf("Paying method : ");
    scanf(" %c", &pay);

    switch(type)
    {
      case 'D' : rate = 31000;
        break;
      case 'S' : rate = 35000;
        break;
      case 'C' : rate = 50000;
        break;
      case 'E' : rate = 75000;
        break;
      case 'P' : rate = 100000;
        break;
      default:
        printf("\tInvalid room type.\n");
        return -1;
    }
    
    if(pay == 'M' || pay == 'm')
    {
      total = rate * rooms * nights;
    }
    else if(pay == 'C' || pay == 'c')
    {
      total = (rate-rate*0.1) * rooms * nights;
    }
    else
    {
      printf("\tInvalid payment method.\n");
      return -1;
    }

    printf("Your total amount is %.2f\n\n", Total = (Total+total));
    
    printf("Do you want to continue? ");
    scanf(" %c", &cont);
    if(cont == 'N' || cont == 'n')
    {
      printf("\tYour total amount is %.2f\n", Total);
      printf("\tThank you,you are welcome!.\n\n");
      return 0;
    }

  }while(cont == 'Y' || cont == 'y');
  
}