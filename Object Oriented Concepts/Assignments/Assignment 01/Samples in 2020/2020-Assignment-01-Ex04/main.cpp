#include <iostream>
#include "Lab.h"
using namespace std;

int main()
{
  Lab L1, L2, L3;

  L1.setLabDetails(401, 60);
  L2.setLabDetails(402, 40);
  L3.setLabDetails(403, 30);

  L1.getCapacity();
  L2.getCapacity();
  L3.getCapacity();

  




  return 0;
}