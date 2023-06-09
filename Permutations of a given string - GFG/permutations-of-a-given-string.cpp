//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	
	    void func(string &s, int begin , vector<string>&ans){
	        if(begin >= s.size()){
	            ans.push_back(s);
	            return;
	        }
	        
	        for(int i=begin; i< s.size(); i++){
	            swap(s[begin] , s[i]);
	            func(s,begin +1 , ans);
	            swap(s[begin],s[i]);
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    //to find all permutations we need swapping indexes..
		    vector<string> ans;
		    func(S,0,ans);
		    
		    sort(ans.begin(),ans.end());
		    set<string>set(ans.begin(),ans.end());
		    vector<string>res(set.begin(),set.end());
		    return res;
		    // Code here there
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends