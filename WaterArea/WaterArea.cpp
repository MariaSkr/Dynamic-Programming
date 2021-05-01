#include <vector>
using namespace std;
//O(n) time | O(1)space
int waterArea(vector<int> heights) {
  if(heights.size() == 0)
  return 0;
	
	auto leftIdx = 0;
	auto rightIdx = heights.size()-1;
	auto leftMax = heights[leftIdx];
	auto rightMax = heights[rightIdx];
	auto surfaceArea = 0;
	
	while(leftIdx < rightIdx){
		if(heights[leftIdx]< heights[rightIdx]){
			leftIdx++;
			leftMax = max(leftMax, heights[leftIdx]);
			surfaceArea += leftMax - heights[leftIdx];
		}else{
			rightIdx--;
			rightMax = max(rightMax, heights[rightIdx]);
			surfaceArea += rightMax - heights[rightIdx];
		}
	}
	return surfaceArea;
}
