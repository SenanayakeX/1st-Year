#include <iostream>
#include "string"
using namespace std; 
#include "Plane.h"

void Plane::setPlaneDetails(int pID, string pio, string des){
  planeID = pID;
  pilot = pio;
  destination = des;
}

void Plane::displayPlaneDetails(){
  cout << endl << "PlaneID = " << planeID << endl;
  cout << "pilot = " << pilot << endl;
  cout << "destination = " << destination << endl;
}

void Plane::setPilot(){
  cout << "Input new pilot of plane " << planeID << ": ";
  cin >> pilot;
}