## Numbers in Pi

Given a string represntation of the first n digits of PI and a list of positive integers (all in string format), write a function that returns the smallest number of spaces that can be added to the n digits of Pi such that all resulting numbers are found in the list of integers.

Note that a single number can appear multiple times in the resulting numbers. For example, if Pi is "3141" and the numbers are ["1", "3", "4"], the number "1" is allowed to appear twice in the list of resulting numbers after three spaces are added:
"3| 1| 4 |1".

If no number of spaces to be added exist such that all resulting numbers are found in the list of integers, the function should return -1.

**Sample Input**
pi = "3141592653589793238462643383279",
numbers = ["314159265358979323846", "26433", "8", "3279", "314159265", "35897932384626433832", "79"]

**Sample Output**
2 // "314159265" | "35897932384626433832" | "79"

**Solution**
1. Store the numbers in the a hash table. 
2. Iterate trough all the prefixes of the main number, until we find a preffix that is equal to a number in our array.
3. Add space after it.
4. Call recursively min method, that calculates the smallest number of spaces in the remaining suffix.

