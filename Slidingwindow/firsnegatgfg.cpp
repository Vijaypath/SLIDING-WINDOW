// C++ implementation to find the first negative
// integer in every window of size k
#include <bits/stdc++.h>

using namespace std;

// function to find the first negative
// integer in every window of size k
void printFirstNegativeInteger(int arr[], int n, int k)
{
	// A Double Ended Queue, Q that will store indexes of
	// useful array elements for the current window of size k.
	// The useful elements are all negative integers.
	queue<int> Q;

	/* Process first k (or first window) elements of array */
	int i;
	for (i = 0; i < k; i++)
		// Add current element at the rear of Q
		// if it is a negative integer
		if (arr[i] < 0)
			Q.push(i);
	
	// Process rest of the elements, i.e., from arr[k] to arr[n-1]
	for ( ; i < n; i++)
	{
		// if Q is not empty then the element at the
		// front of the queue is the first negative integer
		// of the previous window
		if (!Q.empty())
			cout << arr[Q.front()] << " ";
		
		// else the window does not have a
		// negative integer
		else
			cout << "0" << " ";

		// Remove the elements which are out of this window
		while ( (!Q.empty()) && Q.front() < (i - k + 1))
			Q.pop(); // Remove from front of queue

		// Add current element at the rear of Q
		// if it is a negative integer
		if (arr[i] < 0)
			Q.push(i);
	}

	// Print the first negative
	// integer of last window
	if (!Q.empty())
		cout << arr[Q.front()] << " ";
	else
		cout << "0" << " ";	
	
}

// Driver program to test above functions
int main()
{
	int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 3;
	printFirstNegativeInteger(arr, n, k);
	return 0;
}

