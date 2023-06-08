//{ Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool findSubArraySum(int Arr[], int N, int k)
    {
        int ans=0,sum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<N;i++){
            sum+=Arr[i];
            
            if(sum==k) ans++;
            
            ans+=mp[sum-k];
            
            mp[sum]++;
            
            
        }
        if(ans ==0) return false;
        return true;
        // code here
}

    bool subArrayExists(int arr[], int n)
    {   
        
        
        return findSubArraySum(arr,n,0);
    
    
    
    }
};

//{ Driver Code Starts.
// Driver code
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
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}
// } Driver Code Ends