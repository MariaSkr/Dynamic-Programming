class ProgramTest : public TestSuite {
public:
  void Run() {
    RunTest("Test Case 1", []() {
      vector<string> strings = {"abde", "abc", "abd",   "abcde",
                                "ade",  "ae",  "1abde", "abcdef"};
      vector<string> expected = {"abcdef", "abcde", "abde", "ade", "ae"};
      assert(longestStringChain(strings) == expected);
    });
  }
};
