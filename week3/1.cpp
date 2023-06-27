class VectorAddSix : public VectorAddThree {
  public:
    vector<int> Add() {
      nums.push_back(num1);
      nums.push_back(num2);
      nums.push_back(num3);
      nums.push_back(num4);
      nums.push_back(num5);
      nums.push_back(num6);
      return nums;
    }
  
  protected:
    int num4 = 4;
    int num5 = 5;
    int num6 = 6;
  
  private:
    vector<int> nums;
};