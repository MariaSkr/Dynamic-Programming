class ProgramTest : public TestSuite {
public:
  void Run() {
    RunTest("Test Case 1", []() {
      vector<vector<int>> matrix = {
          {5, 3, -1, 5}, {-7, 3, 7, 4}, {12, 8, 0, 0}, {1, -8, -8, 2}};
      auto size = 2;
      auto expected = 18;
      auto actual = maximumSumSubmatrix(matrix, size);
      assert(expected == actual);
    });
  }
};
