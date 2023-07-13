//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    bool isFrequencyUnique(int N, int arr[])
    {   
        set<int>set;
        unordered_map<int,int>mp;
        for(int i=0; i<N; i++){
            mp[arr[i]]++;
        }
        
        for(auto x: mp){
            if(set.find(x.second) != set.end()) return false;
            else set.insert(x.second);
            
        }
        return true;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        bool ans=ob.isFrequencyUnique(n,arr);
        if(ans)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends