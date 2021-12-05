#include <iostream>
#include <cstring>
using namespace std;
#include "Child.h"

void Child::setChildDetails(int ID, string Cname, string Pname, string no){
  childID = ID;
  childName = Cname;
  parentName = Pname;
  contactNo = no;
}

void Child::displayChildDetails(){
  cout << endl << "Child Name = " << childName << endl;
  cout << "Parent Name = " << parentName << endl;
  cout << "Contact Number = " << contactNo << endl;
}

void Child::setContactNo(){
  cout << "Input new contact number of child " << childID << ": ";
  cin >> contactNo;
}