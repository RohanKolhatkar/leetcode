//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
//     bool isanagram(string s1 , string s2){
//         sort(s1.begin(),s1.end());
//         sort(s2.begin(),s2.end());
//         return s1 == s2;
//     }
// 	int search(string pat, string txt) {
// 	    // code here
// 	    int n = txt.size();
// 	    int m = pat.size();
// 	    int count =0;
	    
// 	    for(int i=0; i<n-m+1; i++){
	        
// 	       if(isanagram(txt.substr(i,m) , pat)){
// 	           count++;
// 	       }
// 	    }
// 	    return count;
// 	}

	int search(string pat, string txt) {
	    // code here
	    int n = txt.size();
	    int m = pat.size();
	    
	    map<char,int>mp;
	    for(auto x: pat){
	        mp[x]++;
	    }
	    int i=0, j =0;
	    int count =0;
	    map<char,int>mp2;
	    
	    while(j<n){
	        mp2[txt[j]]++;
	        if(j-i+1 == m){
	            if(mp == mp2){
	                count++;
	            }
	            mp2[txt[i]]--;
	            if(mp2[txt[i]] == 0){
	                mp2.erase(txt[i]);
	            }
	            i++;
	        } 
	        j++;
	    }
	    return count;
	}




};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends