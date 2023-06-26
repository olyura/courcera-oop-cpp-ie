class Atm {
  public:
    Atm() {}
  
    double GetMoney() {
      return money;
    }
  
    void Deposit(double amount) {
      if (amount <= 0) {
        cout << "You cannot deposit a negative or 0 amount of money." << endl;
      }
      else {
        money += amount;
      }
    }
  
    void Withdraw(double amount) {
      if (amount <= 0) {
        cout << "You cannot withdraw a negative or 0 amount of money." << endl;
      }
      else if (amount > money) {
        cout << "You do not have enough funds to withdraw that amount." <<endl;
      }
      else {
        money -= amount;
      }
    }
  
  private:
    double money = 0;
};