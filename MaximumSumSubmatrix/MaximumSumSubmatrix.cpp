#include <vector>
#include <algorithm>
#include <limits>
using namespace std;
//O(w*h)time| O(w*h)space - where w is the width of the matrix and h is the height
vector<vector<int>> createSubMatrix(vector<vector<int>> matrix);
int maximumSumSubmatrix(vector<vector<int>> matrix, int size) {
  vector<vector<int>> sums = createSubMatrix(matrix);
	int maxSubMatrixSum = numeric_limits<int>::min();
	
	for(int row = size-1; row< matrix.size(); row++){
		for(int col = size -1; col< matrix[row].size(); col++){
			int total = sums[row][col];
			
			int touchesTopBorder = row - size <0;
			if(!touchesTopBorder)
				total -= sums[row-size][col];
			
			int touchesLeftBorder = col- size <0;
			if(!touchesLeftBorder)
				total -= sums[row][col-size];
			
			int touchesTopOrLeftBorder = touchesTopBorder || touchesLeftBorder;
			if(!touchesTopOrLeftBorder)
				total += sums[row - size][col-size];
			maxSubMatrixSum = max(maxSubMatrixSum, total);
		}
	}
  return maxSubMatrixSum;
}
vector<vector<int>> createSubMatrix(vector<vector<int>> matrix){
vector<vector<int>> sums;
	for(int row = 0; row< matrix.size(); row++){
		sums.push_back({});
		for(int col = 0; col< matrix[row].size(); col++){
			sums[row].push_back(0);
		}
	}
	sums[0][0] = matrix[0][0];
//Fill the first row
for(int idx =1; idx< matrix[0].size(); idx++){
	sums[0][idx] = sums[0][idx-1]+matrix[0][idx];
}
	//Fill the first column
for(int idx =1; idx< matrix.size(); idx++){
	sums[idx][0] = sums[idx-1][0]+matrix[idx][0];
}
	//Fill the rest of the matrix
for(int row = 1; row< matrix.size(); row++){
		for(int col = 1; col< matrix[row].size(); col++){
			sums[row][col]= sums[row-1][col]+ sums[row][col-1]-sums[row -1][col-1]+matrix[row][col];
		}
}
return sums;
}
