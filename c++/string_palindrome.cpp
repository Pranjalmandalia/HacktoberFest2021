// C++ program for palindrome check
#include <bits/stdc++.h>
using namespace std;

// Function to check whether string
// is palindrome
string isPalindrome(string S)
{
	// Iterate over the range [0, N/2]
	for (int i = 0; i < S.length() / 2; i++) {

		// If S[i] is not equal to
		// the S[N-i-1]
		if (S[i] != S[S.length() - i - 1]) {
			// Return No
			return "No";
		}
	}
	// Return "Yes"
	return "Yes";
}

// Driver Code
int main()
{
	string S = "ABCDCBA";
	cout << isPalindrome(S);

	return 0;
}
//DO change according to your requirements, basic layout is given