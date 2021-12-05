class Dog{
  private:
    int dogID;
    string dogName;
    string owner;

  public:
    void setDogDetails(int dID, string dName, string dOw);
    void displayDogDetails();
    void setOwner();
};