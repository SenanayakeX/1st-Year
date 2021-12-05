class Plane{
  private:
    int planeID;
    string pilot;
    string destination;

  public:
    void setPlaneDetails(int pID, string pio, string des);
    void displayPlaneDetails();
    void setPilot();
};