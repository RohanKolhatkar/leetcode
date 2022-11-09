//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    
    void ratInMaze(vector<vector<int>> &m, int n, int row, int col, vector<string> &ans, string s, vector<vector<int>> &vis)
    {   
        
        // if you reach the end or the position m[n-1][n-1] means your path completed so push the path into a ans.
        if(row== n-1 && col== n-1)
        {
            ans.push_back(s);
            return;
        }
        
        // since we need to return in lexicographcal order we can following D,L,R,U --> as its lexixographical order.
        
        //downward
        // this condtion checks whether your are inside the matrix and make sure it is unvisted node and also it 
        // should be one so that we can move as 0 means blocked position.
        // same follows for other.
        if(row+1< n && vis[row+1][col]== 0 && m[row+1][col]== 1)
        {   
            
            //mark it as visited.
            //then call the funcion from here to discover further path from here 
            //make sure after that it should be marked as unvisted so that 
            // backtrack can happen once all are discoved from that position.
            vis[row][col]= 1;
            ratInMaze(m, n, row+1, col, ans, s+'D', vis);
            vis[row][col]= 0;
        }
    
        //leftward
        if(col-1>= 0 && vis[row][col-1]== 0 && m[row][col-1]== 1)
        {
            vis[row][col]= 1;
            ratInMaze(m, n, row, col-1, ans, s+'L', vis);
            vis[row][col]= 0;
        }
    
        //rightward
        if(col+1< n && vis[row][col+1]== 0 && m[row][col+1]== 1)
        {
            vis[row][col]= 1;
            ratInMaze(m, n, row, col+1, ans, s+'R', vis);
            vis[row][col]= 0;
        }
    
        //upward
        if(row-1>= 0 && vis[row-1][col]== 0 && m[row-1][col]== 1)
        {
            vis[row][col]= 1;
            ratInMaze(m, n, row-1, col, ans, s+'U', vis);
            vis[row][col]= 0;
        }
        
    }

    vector<string> findPath(vector<vector<int>> &m, int n) 
    {   
        
        // we are taking this as our answer and will return it.
        vector<string> ans; 
        
        //making this of type matrix( or vector<vector<int>> using name matrix for simplicity) because we need to mark each one as visited, we will mark as 1 for visited but
        // initially all are marked 0 means all are unvisited right now.
        vector<vector<int>> vis(n, vector<int>(n,0));
        
        // a string s to denote the path.
        string s= "";
        
        // row and col are used to denote the starting and ending point of path or 
        //from where we need to do the algo.
        int row= 0;
        int col= 0;
        
        // if we are seeing the matrix entry as 1 means we can go on that path so call the function
        if(m[row][col]== 1)
        {   
            
            // this functiion takes matrix, size of matrix , row,col,answer , string and visited array.
            ratInMaze(m, n, row, col, ans, s, vis);
        }
        
        // otherwise we can not go.
        // lastly return the ans.
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends