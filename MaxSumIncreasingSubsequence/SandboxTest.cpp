// This file is initialized with a code version of this
// question's sample test case. Feel free to add, edit,
// or remove test cases in this file as you see fit!

class ProgramTest : public TestSuite {
public:
  void Run() {
    RunTest("Test Case 1", []() {
      vector<int> input{10, 70, 20, 30, 50, 11, 30};
      vector<vector<int>> expected{{110}, {10, 20, 30, 50}};
      assert(maxSumIncreasingSubsequence(input) == expected);
    });
  }
};
