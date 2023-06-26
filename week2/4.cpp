//DO NOT EDIT/////////////////////
class Cash : public PiggyBank { //
//////////////////////////////////
  public:
    Cash(int o, int f, int tn, int tw) : PiggyBank(o, f, tn, tw) {}
  
    void DisplayBills() {
      cout << "One-dollar bill: " << GetOnes() << endl;
      cout << "Five-dollar bill: " << GetFives() << endl;
      cout << "Ten-dollar bill: " << GetTens() << endl;
      cout << "Twenty-dollar bill: " << GetTwenties() << endl;
    }
  
    void DisplayCashTotal() {
      cout << "Total amount: "; 
      cout << GetOnes() + GetFives() * 5 + GetTens() * 10 + GetTwenties() * 20;
      cout << endl;
    }
};