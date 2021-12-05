#include "Lab.h"
#include <iostream>
using namespace std;

void Lab::setLabDetails(int ID, double cap){
  labID = ID;
  capacity = cap;
}

double Lab::getCapacity(){
  cout << "Insert capacity : ";
  cin >> capacity;
  cout << endl << "Insert capacity : " << capacity << endl;
  cout << "Lab " << labID << endl;
}