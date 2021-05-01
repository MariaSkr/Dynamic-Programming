class ProgramTest : public TestSuite {
public:
  void Run() {
    RunTest("Test Case 1",
            []() { assert(palindromePartitioningMinCuts("noonabbad") == 2); });
  }
};
