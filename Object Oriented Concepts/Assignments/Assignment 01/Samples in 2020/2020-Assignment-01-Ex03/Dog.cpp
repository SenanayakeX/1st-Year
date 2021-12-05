#include <iostream>
#include <string>
using namespace std;
#include "Dog.h"

void Dog::setDogDetails(int dID, string dName, string dOw){
  dogID = dID;
  dogName = dName;
  owner = dOw;
}

void Dog::displayDogDetails(){
  cout << endl << "Dog ID : " << dogID << endl;
  cout << "Dog name : " << dogName << endl;
  cout << "Dog owner : " << owner << endl;
}

void Dog::setOwner(){
  cout << "Input new owner of dog " << dogID << ": ";
  cin >> owner;
}