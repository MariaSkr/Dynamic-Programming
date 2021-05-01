using namespace std;
int minimum(int a, int b, int c) {
  return min(min(a, b), c);
}
//O(mn)time | O(min(n,m))space
int levenshteinDistance(string str1, string str2) {
  // Write your code here.
	if (str1 == str2)
    return 0;

  if (str1.length() == 0)
    return str2.length();

  if (str2.length() == 0)
    return str1.length();

  // for all i and j, d[i,j] will hold the Levenshtein distance between
  // the first i characters of str1 and the first j characters of str2;
  // note that d has (m+1)*(n+1) values
  int d[str1.length() + 1][str2.length() + 1];

  // source prefixes can be transformed into empty string by
  // dropping all characters
  for (int i = 0; i <= str1.length(); i++) {
    d[i][0] = i;
  }

  // target prefixes can be reached from empty source prefix
  // by inserting every character
  for (int j = 1; j <= str2.length(); j++) {
    d[0][j] = j;
  }

  int cost;
  for (int i = 1; i <= str1.length(); i++) {
    for (int j = 1; j <= str2.length(); j++) {

      if (str1.at(i - 1) == str2.at(j - 1))
        cost = 0; // no operation required
      else
        cost = 1;

      d[i][j] = minimum(
        d[i - 1][j] + 1, // a deletion
        d[i][j - 1] + 1, // an insertion
        d[i - 1][j - 1] + cost); // a substitution
    }
  }

  return d[str1.length()][str2.length()];
}
