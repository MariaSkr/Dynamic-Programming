#include <vector>
#include <climits>
using namespace std;
//O(nd) | O(n)
int minNumberOfCoinsForChange(int n, vector<int> denoms) {
  vector<int> solution(n + 1, INT_MAX); 
  solution[0] = 0;
	int toCompare = 0;
  for (int denom : denoms){
    for (int i = 0; i < solution.size(); ++i) {
			if(denom<=i){
				if(solution[i- denom]==INT_MAX){
					toCompare = solution[i- denom];
				}else{
				toCompare = 	solution[i- denom]+1;
				}
			
      solution[i] = min(solution[i],	toCompare);

    }
  }
	}
  return solution[n] != INT_MAX ? solution[n] : -1;
}
