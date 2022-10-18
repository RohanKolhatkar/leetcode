// class Solution {
// public:
// //     string countAndSay(int n) {
// //         // int n = 100;
// //         // return the ans in string and you are provided the input
// //         // as int.
// //         string s = to_string(n);
// //         string ans =" ";
// //         unordered_map<string,int> mp;
// //         for(int i=0; i<n; i++){
// //             mp[s[i]]++;
// //         }
        
// //         for(auto x:mp){
// //             ans+= to_string(x.second)+x.first;
            
// //         }
        
        
// //         return ans;       
        
        
//     // }
// };



class Solution {
public:
    string countAndSay(int n) {
        string currentString = "1";
        for (int i = 2; i <= n; i++) {
            string nextString;
            for (int j = 0, k = 0; j < currentString.size(); j = k) {
                while (k < currentString.size() && currentString[k] == currentString[j]) k++;
                nextString += to_string(k - j) + currentString[j];
            }
            currentString = nextString;
        }
        return currentString;
    }
};