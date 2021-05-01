// This file is initialized with a code version of this
// question's sample test case. Feel free to add, edit,
// or remove test cases in this file as you see fit!

class ProgramTest : public TestSuite {
public:
  void Run() {
    RunTest("Test Case 1", []() {
      vector<vector<int>> vector1{{1, 2}, {4, 3}, {5, 6}, {6, 7}};
      vector<vector<int>> vector1S{{10}, {1, 3}};
      assert(knapsackProblem(vector1, 10) == vector1S);
    });
  }
};
