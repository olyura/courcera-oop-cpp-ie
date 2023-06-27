class Airplane : public Vehicle {
  public:
    Airplane(double s) {
      speed = s;
    }
  
    void Distance(double time) {
      cout << speed * time << endl;
    }
    
  private:
    double speed;
};