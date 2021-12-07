
#include <iostream>
#include <cstring>
using namespace std;

class Employee{ //class name
  private:
    int employeeID;
    string employeeName;
    string designation;
    int remainingLeavesCount;

  public:
    void setEmployeeDetails(int ID, string Name, string Des, int Count);
    void displayEmployeeDetails();
    void setRemainingLeavesCount();
};

int main() //Main function
{
  Employee e[3]; //objects

  e[0].setEmployeeDetails(12, "Malith", "Manager", 14); 
  e[1].setEmployeeDetails(14, "Saman", "Accountant", 2);
  e[2].setEmployeeDetails(16, "Amal", "Administrator", 5);

  for(int i = 0; i < 3; i++){
    e[i].setRemainingLeavesCount();
  }

  for(int i = 0; i < 3; i++){
    e[i].displayEmployeeDetails();
  }

  return 0;
}

//function definition
void Employee::setEmployeeDetails(int ID, string Name, string Des, int Count){ 
  employeeID = ID;
  employeeName = Name;
  designation = Des;
  remainingLeavesCount = Count;
}

void Employee::displayEmployeeDetails(){
  cout << endl << "EmployeeID = " << employeeID << endl; //print statements
  cout << "EmployeeName = " << employeeName << endl;
  cout << "Designation = " << designation << endl;
  cout << "RemainingLeavesCount = " << remainingLeavesCount << endl;
}

void Employee::setRemainingLeavesCount(){
  cout << "Number of leaves applied by employee " << employeeID << ": "; //get keyboard input
  cin >> remainingLeavesCount;
}