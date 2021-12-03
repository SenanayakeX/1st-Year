#include <stdio.h>
float calculateIncrement(int grade, float basicSalary);
float calcTotSalary(float salary, float increment);
int main()
{
  char grade;
  float basic,increment,tot;

  printf("Enter salary : ");
  scanf("%f", &basic);
  printf("Enter grade : ");
  scanf(" %c", &grade);

  increment = calculateIncrement(grade, basic);
  tot = calcTotSalary(basic, increment);

  printf("Increment : %.2f\n", increment);
  printf("Total salry : %.2f\n", tot);

  return 0;
}

float calculateIncrement(int grade, float basicSalary)
{
  float increment,rate=0;

  if(grade == '1')
  {
    rate = 0.1;
  }
  else if(grade == '2')
  {
    rate = 0.15;
  }
  else if(grade == '3')
  {
    rate = 0.2;
  }
  
  increment = basicSalary * rate;

  return increment;
}

float calcTotSalary(float salary, float increment)
{
  float total;

  total = salary + increment;

  return total;
}