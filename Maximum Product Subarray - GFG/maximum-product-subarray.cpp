//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    long long  prefixproduct = 1;
	    long long  suffixproduct = 1;
	    long long maxi = arr[0];
	    for(int i=0; i<n; i++){
	        prefixproduct *=arr[i]; 
	        suffixproduct *= arr[n-i-1];
	        long long  ans = max(prefixproduct,suffixproduct);
	        maxi = max(maxi,ans);
	        if(prefixproduct == 0) prefixproduct = 1;
	        if(suffixproduct == 0) suffixproduct = 1;
	    }
	    return maxi;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends