class Child : public Parent2 {
  public:
    string Identify() {
      return "This function is called from Child";
    }
  
    string Identify2() {
      return Parent2::Identify();
    }
  
    string Identify3() {
      return Parent1::Identify();
    }
};