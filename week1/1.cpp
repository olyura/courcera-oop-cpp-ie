class Fruit {
  public:
    Fruit(string n, string c) {
      name = n;
      color = c;
    }
  
    string GetName() {
      return name;
    }
  
    void SetName(string new_name) {
      name = new_name;
    }
  
    string GetColor() {
      return color;
    }
  
    void SetColor(string new_color) {
      color = new_color;
    }
  
  private:
    string name;
    string color;
};