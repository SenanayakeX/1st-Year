#include <iostream>
#include <cstring>
using namespace std;
#include "Child.h"

int main()
{
  Child c1, c2, c3;

  c1.setChildDetails(1, "Oliver", "Bryan", "716542981");
  c2.setChildDetails(2, "Cody", "Joel", "776543298");
  c3.setChildDetails(3, "Kaden", "Jessica", "751239876");

  c1.setContactNo();
  c2.setContactNo();
  c3.setContactNo();

  c1.displayChildDetails();
  c2.displayChildDetails();
  c3.displayChildDetails();




  return 0;
}