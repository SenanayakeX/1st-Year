class Child{
  private:
    int childID;
    string childName;
    string parentName;
    string contactNo;

  public:
    void setChildDetails(int ID, string Cname, string Pname, string no);
    void displayChildDetails();
    void setContactNo();
};