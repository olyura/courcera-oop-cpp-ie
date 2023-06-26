//DO NOT EDIT/////////////////////////////////////////////////
class CardHolder : public Person {                          //
  public:                                                   //
    CardHolder(string n, string a, int an) : Person(n, a) { //
      account_number = an;                                  //
      balance = 0;                                          //
      credit_limit = 5000;                                  //
    }                                                       //
//////////////////////////////////////////////////////////////
  
    int GetAccountNumber() {
      return account_number;
    }

    void SetAccountNumber(int new_account_number) {
      account_number = new_account_number;
    }

    double GetBalance() {
      return balance;
    }

    void SetBalance(double new_balance) {
      balance = new_balance;
    }

    int GetCreditLimit() {
      return credit_limit;
    }

    void SetCreditLimit(int new_credit_limit) {
      credit_limit = new_credit_limit;
    }

    void Sale(double price) {
      balance += price;
    }

    void Payment(double amount) {
      balance -= amount;
    }
  
  private:
    int account_number;
    double balance;
    int credit_limit;
};

//DO NOT EDIT/////////////////////////////////////////////////////////////
class PlatinumClient : public CardHolder {                              //
  public:                                                               //
    PlatinumClient(string n, string a, int an) : CardHolder(n, a, an) { //
      cash_back = 0.02;                                                 //
      rewards = 0;                                                      //
    }                                                                   //
//////////////////////////////////////////////////////////////////////////

    double GetCashBack() {
      return cash_back;
    }

    void SetCashBack(double new_cash_back) {
      cash_back = new_cash_back;
    }

    double GetRewards() {
      return rewards;
    }

    void SetRewards(double new_rewards) {
      rewards = new_rewards;
    }

    void Sale(double price) {
      rewards += cash_back * price;
      SetBalance(GetBalance() + price);
    }
  
  private:
    double cash_back;
    double rewards;
};