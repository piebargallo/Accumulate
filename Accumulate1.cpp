// C++ program to demonstrate working of accumulate()
#include <iostream>
#include <numeric>
using namespace std;

// User defined function that returns sum of
// arr[] using accumulate() library function.
int arraySum(int a[], int n) {
	
	int initial_sum = 0;
	return accumulate(a, a+n, initial_sum);

} // End function arraySum

// Driver code
int main() {
	
	int a[] = {1, 2, 3, 4, 5, 6} ;
	int n = sizeof(a)/sizeof(a[0]);
	cout << "Result of accumulate: " << arraySum(a, n);
	
	return 0;

} // End code
