class ProgramTest : public TestSuite {
public:
  void Run() {
    RunTest("Test Case 1", []() {
      vector<int> input{5, 11, 3, 50, 60, 90};
      assert(maxProfitWithKTransactions(input, 2) == 93);
    });
  }
};
