class ProgramTest : public TestSuite {
public:
  void Run() {
    RunTest("Test Case 1", []() {
      vector<int> expected{-24, 2, 3, 5, 6, 35};
      vector<int> input{5, 7, -24, 12, 10, 2, 3, 12, 5, 6, 35};
      assert(longestIncreasingSubsequence(input) == expected);
    });
  }
};
