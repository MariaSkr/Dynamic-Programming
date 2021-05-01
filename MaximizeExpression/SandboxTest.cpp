class ProgramTest : public TestSuite {
public:
  void Run() {
    RunTest("Test Case 1", []() {
      vector<int> input = {3, 6, 1, -3, 2, 7};
      auto expected = 4;
      auto actual = maximizeExpression(input);
      assert(expected == actual);
    });
  }
};
