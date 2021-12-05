#include <iostream>
#include <string>
using namespace std;
#include "Plane.h"

int main()
{
  Plane p[4];

  p[0].setPlaneDetails(1, "John", "USA");
  p[1].setPlaneDetails(2, "George", "UK");
  p[2].setPlaneDetails(3, "Henry",  "USA");
  p[3].setPlaneDetails(4, "Ronald", "UAE");

  for(int i=0; i<4; i++ ){
    p[i].setPilot();
  }

  for(int i= 0; i < 4; i++){
    p[i].displayPlaneDetails();
  }



  return 0;
}