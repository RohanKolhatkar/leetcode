//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int minCost(vector<vector<int>> &colors, int n) {
        // Write your code here.
        
        int pink , black , yellow = 0;
        
        for(int i=0; i<n; i++){
            int currpink = min(black,yellow)+colors[i][0];
            int currblack = min(yellow,pink)+colors[i][1];
            int curryellow = min(black,pink)+colors[i][2];
            
            pink = currpink, black = currblack, yellow =  curryellow;
            
        }
        
        
        return min(pink,min(black,yellow));
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<vector<int>> colors(n, vector<int>(3));
        for (int i = 0; i < n; i++)
            cin >> colors[i][0] >> colors[i][1] >> colors[i][2];
            
        Solution ob;
        cout << ob.minCost(colors, n) << endl;    
    }
}
// } Driver Code Ends