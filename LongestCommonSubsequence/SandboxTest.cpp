// This file is initialized with a code version of this
// question's sample test case. Feel free to add, edit,
// or remove test cases in this file as you see fit!

class ProgramTest : public TestSuite {
public:
  void Run() {
    RunTest("Test Case 1", []() {
      vector<char> expected{'X', 'Y', 'Z', 'W'};
      assert(longestCommonSubsequence("ZXVVYZW", "XKYKZPW") == expected);
    });
  }
};
