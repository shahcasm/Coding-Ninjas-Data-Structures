#include <iostream>
using namespace std;

/***
You need to save all the subsets in the given 2D output array. And return the number of subsets(i.e. number of rows filled in output) from the given function.

In ith row of output array, 1st column contains length of the ith subset. And from 1st column actual subset follows.
For eg. Input : {1, 3, 4, 2} and K = 5, then output array should contain
	{{2, 1, 4},	// Length of this subset is 2
	{2, 3, 2}}	// Length of this subset is 2

Don�t print the subsets, just save them in output.
***/

void helper(int input[], int size, int output[][50], int k) {
	// Base case
	// If size of array is 0
	if(size == 0) {
		// If there is atleast `1` value which matched
		if(k == 0) {
			output[0][0] = 0;
			return 1;
		} else {
			return 0;
		}
	}

	// Output Array 1
	int output1[100][50];
	int output2[100][50];

	// Recursion
	helper(input+1, n-1, output1, k);
	
	helper(input+1, n-1, output2, k-input[0]); 
	
}

int subsetSumToK(int input[], int n, int output[][50], int k) {
    // Write your code here
	return helper(input, n, output, k);
	
}

int main() {
  int input[20],length, output[10000][50], k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];

  cin >> k;
  
  int size = subsetSumToK(input, length, output, k);

  for( int i = 0; i < size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}
