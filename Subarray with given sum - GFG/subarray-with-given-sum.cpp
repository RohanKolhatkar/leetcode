//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {   
        vector<int>ans;
        int i=0,j=0,sum=0;
        if(s==0){
            ans.push_back(-1);
            return ans;
        }
        while(j<n){
            sum=sum+arr[j];
            while(sum>s){
                sum=sum-arr[i];
                i++;
            }
            if(sum==s){
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            j++;
        }
        ans.push_back(-1);
        return ans;
        // Your code here
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
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends