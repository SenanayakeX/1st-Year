#include <iostream>
#include <string>
using namespace std;
#include "Train.h"

void Train::setTrainDetails(int ptrainID, int pcapacity, string pstartTime, string pdestination){
  trainID = ptrainID;
  capacity = pcapacity;
  startTime = pstartTime;
  destination = pdestination;
}

void Train::displayTrainDetails(){
  cout << endl << "TrainId = " << trainID << endl;
  cout << "Capacity = " << capacity << endl;
  cout << "StartTime = " << startTime << endl;
  cout << "Destination = " << destination << endl;
}

void Train::setStartTime(){
  cout << "Input new start time of train " << trainID << ": ";
  cin >> startTime;
}