// class Solution {
// public:
//     vector<int> search(string &pat, string &txt)
//     {   
//         vector<int> v;
//         int M = pat.length();
//         int N = txt.length();

//         /* A loop to slide pat[] one by one */
//         for (int i = 0; i <= N - M; i++) {
//             int j;

//             /* For current index i, check for pattern match */
//             for (j = 0; j < M; j++)
//                 if (txt[i + j] != pat[j])
//                     break;

//             if (j == M) // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
//                 v.push_back(i);
//         }
//         return v;
//     }
    
//     int minExtraChar(string s, vector<string>& arr) {
        
// //         int n = arr.size();
// //         vector<int>v(s.length(),0);
// //         for(int i=0; i<n; i++){
// //             int s_size = arr[i].length();
// //             size_t f = s.find(arr[i]);
// //             cout<<f<<" ";
// //             if(f != string::npos){
// //                 while(s_size -- ){
// //                     v[f] = 1;
// //                     f++;
// //                 }
                
// //             }
            
// //         }
// //         for(auto x: v) cout<<x;
// //         int count=0;
// //         for(int i=0; i<v.size(); i++){
// //             if(v[i] == 0) count++;
// //         }
// //         return count;
        
        
// //         int n = s.length() , m = arr.size();
//         // vector<int>v(n,0);
// //         for(int i=0; i<m; i++){
// //             string temp = arr[i];
// //             for(int j=0; j<temp.length(); j++){
// //                 for(int k =0; k<n; k++){
// //                     if(s[k] == temp[j]){
// //                         v[k] = 1;
// //                     }
// //                 }
// //             }
// //         }
        
// //         int count=0;
// //         for(int i=0; i<v.size(); i++){
// //             if(v[i] == 0) count++;
// //         }
// //         return count;
        
        
//         int n = s.length() , m = arr.size();
//         vector<int>v(n,0);
//         for(int i=0; i<m; i++){
//             string temp = arr[i];
//             vector<int> b = search(temp,s);
//             for(int j=0; j<b.size(); j++){
//                 for(int k=b[j]; k< b[j]+temp.length(); k++){
//                     v[k]=1;
                    
//                 }    
//             } 
//         }
        
//         int count=0;
//         for(int i=0; i<v.size(); i++){
//             if(v[i] == 0) count++;
//         }
//         return count;       
        
        
        
        
        
        
        
//     }
// };














class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        set<string> str;
        int n1 = s.size();
        int n2 = dictionary.size();
        for(int i=0;i<n2;i++)
        {
            str.insert(dictionary[i]);
        }
        vector<int> dp(n1+1,0);
        //0 1 2 3 4 5 6
        for(int i=1;i<=n1;i++)
        {
            dp[i] = dp[i-1]+1;
            for(int j=i;j>=1;j--)
            {
            string temp = s.substr(j-1,i-j+1);
                if(str.count(temp))
                {
                    dp[i] = min(dp[i],dp[j-1]);
                }
            }
        }
        return dp[n1];
    }
};