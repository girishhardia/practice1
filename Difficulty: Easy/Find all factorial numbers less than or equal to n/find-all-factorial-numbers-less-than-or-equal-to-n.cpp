//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long counter = 1;
    vector<long long> vec;

    vector<long long> factorialNumbers(long long n, long long fac = 1) {
        // Base case: if the current factorial exceeds n, stop the recursion
        if (fac > n) {
            return vec;
        }

        // Add the current factorial to the vector
        vec.push_back(fac);

        // Recursively call the function, incrementing counter and calculating the next factorial
        return factorialNumbers(n, fac * (++counter));
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends