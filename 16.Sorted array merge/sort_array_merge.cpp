#include <bits/stdc++.h>
using namespace std;
#define N 4

// Merge and sort k arrays
void merge_and_sort(
	vector<int> &output, vector<vector<int>> arr,
	int n, int k)
{
	// Put the elements in sorted array.
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n; j++) {
			output[(i * n) + j] = arr[i][j];
		}
	}

	// Sort the output array
	sort(output.begin(), output.end());
}

// Driver Function
int main()
{
	// Input 2D-array
	vector<vector<int>> arr = { { 5, 7, 15, 18 },
					{ 1, 8, 9, 17 },
					{ 1, 4, 7, 7 } };
	int n = N;
	
	// Number of arrays
	int k = arr.size();

	// Output array
	vector<int> output(n*k);

	merge_and_sort(output, arr, n, k);

	// Print merged array
	for (int i = 0; i < n * k; i++)
		cout << output[i] << " ";

	return 0;
}