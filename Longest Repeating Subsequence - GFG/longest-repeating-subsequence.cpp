//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	
	
	    int lcs(string s, string t, int n , int m){
	        if(n==0 || m ==0) return 0;
	        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
	        
	        for(int i=1; i<=n; i++){
	            for(int j=1; j<=m; j++){
    	            if(s[i-1] == t[j-1] && i!=j){
    	                dp[i][j] = 1+ dp[i-1][j-1];
    	            }
    	            else{
    	                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
    	            }
	            }
	        }
	        return dp[n][m];
	    }
		int LongestRepeatingSubsequence(string s){
		    int n = s.size();
		    string t = s;
		    int m = t.size();
		    
		    return lcs(s,t,n,m);
		    // Code here
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends