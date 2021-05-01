#include <vector>
#include <climits>
using namespace std;
//O(n^2)|O(n^2)
int palindromePartitioningMinCuts(string string) {
	vector<vector<bool>> palindromes(string.length(), vector<bool>(string.length(), false));
	for(int i = 0; i<string.length(); i++){
		palindromes[i][i]= true;
	}
	for(int length = 2; length <string.length() +1; length++){
			for(int i= 0; i <string.length()-length +1; i++){
				int j = i+ length -1;
				if(length == 2){
					palindromes[i][j] = (string[i]==string[j]);
				}else{
						palindromes[i][j] = (string[i]==string[j] && palindromes[i+1][j-1]);
				}
	}
	}
	vector<int> cuts(string.length(), INT_MAX);
	for(int i = 0; i<string.length(); i++){
		if(palindromes[0][i]){
			cuts[i] = 0;
		}else{
			cuts[i] = cuts[i-1]+1;
			for(int j= 1; j<i; j++){
				if(palindromes[j][i] && cuts[j-1]+1 < cuts[i]){
					cuts[i] = cuts[j-1]+1;
				}
			}
		}
	}
 
  return cuts[string.length()-1];
}
