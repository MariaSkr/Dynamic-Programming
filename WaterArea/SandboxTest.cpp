// This file is initialized with a code version of this
// question's sample test case. Feel free to add, edit,
// or remove test cases in this file as you see fit!

class ProgramTest : public TestSuite {
public:
  void Run() {
    RunTest("Test Case 1", []() {
      vector<int> input{0, 8, 0, 0, 5, 0, 0, 10, 0, 0, 1, 1, 0, 3};
      assert(waterArea(input) == 48);
    });
  }
};
