using namespace std;
//O(w+h)time O(1) space
int factorial(int num);
//O(n+m)time | O(1)space - where n is weight of the graph and m is the height
int numberOfWaysToTraverseGraph(int width, int height) {
  int xDistanceToCorner = width -1;
	int yDistanceToCorner = height -1;
	//The number of permutations of the right and down movements is the number of ways to reach the bottom right corner
	int numerator = factorial(xDistanceToCorner + yDistanceToCorner);
	int denominator = factorial(xDistanceToCorner) * factorial(yDistanceToCorner);
	return int(numerator/denominator);
}

int factorial(int num){
	int result = 1;
	for(int n = 2; n< num +1; n++){
		result *=n;
	}
	return result ;
}
