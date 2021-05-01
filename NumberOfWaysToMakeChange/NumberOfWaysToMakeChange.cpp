#include <vector>
using namespace std;
//O(nd) time | O(n)space
int numberOfWaysToMakeChange(int n, vector<int> denoms) {
  vector<int> solution(n + 1); 
  solution[0] = 1;

  for (int den: denoms) {
    for (int i = den; i < (n + 1); ++i) {
      solution[i] += solution[i - den]; 
    }
  }
  
  return solution.back();
}
