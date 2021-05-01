// This file is initialized with a code version of this
// question's sample test case. Feel free to add, edit,
// or remove test cases in this file as you see fit!

class ProgramTest : public TestSuite {
public:
  void Run() {
    RunTest("Test Case 1", []() {
      vector<int> input{3, 4, 2, 1, 2, 3, 7, 1, 1, 1, 3};
      assert(minNumberOfJumps(input) == 4);
    });
  }
};
