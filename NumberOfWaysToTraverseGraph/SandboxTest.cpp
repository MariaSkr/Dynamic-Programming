// This file is initialized with a code version of this
// question's sample test case. Feel free to add, edit,
// or remove test cases in this file as you see fit!

class ProgramTest : public TestSuite {
public:
  void Run() {
    RunTest("Test Case 1", []() {
      auto width = 4;
      auto height = 3;
      auto expected = 10;
      auto actual = numberOfWaysToTraverseGraph(width, height);
      assert(expected == actual);
    });
  }
};
