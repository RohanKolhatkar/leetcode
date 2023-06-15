//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin(string s) {
        
        // int n =s.length();
        // string t = s;
        // int maxi_length =0;
        // reverse(t.begin(),t.end());
        // string ans;
        // vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        // for(int i=0; i<n+1; i++){
        //     for(int j=0; j<n+1; i++){
        //         if(i==0 && j == 0) dp[i][j]=0;
        //         else if(s[i-1] == s[j-1]){
        //             dp[i][j] = 1+ dp[i-1][j-1];
                    
        //             if(dp[i][j] > maxi_length){
        //                 string temp = (s.substr(i-dp[i][j] , dp[i][j]));
        //                 string temprev = temp;
        //                 reverse(temprev.begin(),temprev.end());
        //                 if(temp == temprev){
        //                     dp[i][j]= maxi_length;
        //                     ans = temp;
        //                 }
                        
        //             }
        //         }else{
        //             dp[i][j]=0;
        //         }
        //     }
        // }
        // return ans;
        
        string t = s;
		reverse(s.begin(), s.end());
		int m = s.size();
		vector<vector<int>>dp(m+1, vector<int>(m + 1, 0));
		int mx = 0;
		string ans;
        
		for(int i = 1; i < m+1; i++) {
			for(int j = 1; j < m+1; j++) {
				// If we found same characters
				if(t[i-1] == s[j-1]) {
					dp[i][j] = 1 + dp[i-1][j-1];
					// If we found greater length substring
					if(dp[i][j] > mx) { 
						string temp = t.substr(i - dp[i][j], dp[i][j]);

            string s3 = temp;
            reverse(s3.begin(),s3.end());
            if(s3 == temp){
                mx = dp[i][j];
                ans = temp;
              }
						// Check for palindrome ans update ans
						// if(isPalindrome(temp)) {
						// 	mx = dp[i][j];
						// 	ans = temp;
						// }
					}
				}
				else
					dp[i][j] = 0;
			}
		}
		return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends