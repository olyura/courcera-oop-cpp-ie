class CardBinder {
  public:
    CardBinder() {}
  
    int GetGold() {
      return gold_card;
    }
  
    int GetSilver() {
      return silver_card;
    }
  
    int GetTotal() {
      return gold_card + silver_card;
    }
  
    void AddGold(int amount) {
      if (amount <= 0) {
        cout << "You cannot add a negative or 0 amount of cards." << endl;
      }
      else if (amount + gold_card + silver_card > 20) {
        cout << "You do not have enough binder room." << endl;
      }
      else {
        gold_card += amount;
      }
    }
  
    void RemoveGold(int amount) {
      if (amount <= 0) {
        cout << "You cannot remove a negative or 0 amount of cards." << endl;
      }
      else if (gold_card - amount < 0) {
        cout << "You do not have enough gold cards to remove." << endl;
      }
      else {
        gold_card -= amount;
      }
    }
  
    void AddSilver(int amount) {
      if (amount <= 0) {
        cout << "You cannot add a negative or 0 amount of cards." << endl;
      }
      else if (amount + gold_card +silver_card > 20) {
        cout << "You do not have enough binder room." << endl;
      }
      else {
        silver_card += amount;
      }
    }
  
    void RemoveSilver(int amount) {
      if (amount <= 0) {
        cout << "You cannot remove a negative or 0 amount of cards." << endl;
      }
      else if (silver_card - amount < 0) {
        cout << "You do not have enough silver cards to remove." << endl;
      }
      else {
        silver_card -= amount;
      }
    }
  
  private:
    int gold_card = 0;
    int silver_card = 0;
};