class Solution {
    void solve(vector<int>& cookies, vector<int> &v, int c, int &res){
        if(c == cookies.size()){
            int maxCookies = 0;
            for(int i = 0; i < v.size(); i++){
                maxCookies = max(maxCookies, v[i]);
            }
            res = min(res, maxCookies); //optimal distribution = min(the number of cookies taken by the person with most cookies) or the opposite
            return;
        }
        for(int i = 0; i < v.size(); i++){ //just list all combinations
            v[i] += cookies[c];
            solve(cookies, v, c + 1, res);
            v[i] -= cookies[c];
        }
    }
public:
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> v(k, 0);
        int res = INT_MAX;
        solve(cookies, v, 0, res);
        return res;
    }
};



// class Solution{
//     vector<int> solve(vector<int>&cookies, int ind , int k ,vector<int>&v){
//         if(ind == cookies.size()){
//             return v;
//         }
//         //for allocating in k bags...
//         for(int i=0; i<k; i++){
//             v[i] += cookies[ind];
//             solve(cookies,ind+1,k,v);
//             v[i] -= cookies[ind];
//         }
//         return v;

//     }
//     public:
//     int distributeCookies(vector<int>& cookies, int k) {
//         vector<int>v(k);
//         solve(cookies,0,k,v);
//         int res = INT_MAX;
//         for(auto x: v){
//             res=min(res,x);
//         }
//         return res;
//     }
// };


















