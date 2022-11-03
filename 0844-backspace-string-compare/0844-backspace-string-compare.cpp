// class Solution {
// public:
//     bool backspaceCompare(string s, string t) {
        
//         int p = s.size() -1, q = t.size() -1;
//         int a , b;
//         for(int i=p; i<=0; i++){
            
//             if(s[i] == '#'){
//                 int a = p+1;
//             }
//         }
        
//         for(int i=q; i<=0; i++){
            
//             if(t[i] == '#'){
//                 int b = q+1;
//             }
//         }
        
        
        
        
//         // matching the things.
//         if((p-a) != (q-b) ) return false;
//         while(a!=p || b!=q){
//             if(s[a] != t[b]) return false;
//             a++;
//             b++;
//         }
//         return true;
        
//     }
    
    
// };

class Solution {
public:
bool backspaceCompare(string s, string t) {
        int k=0,p=0; 
        for(auto x:s){
            if(x=='#'){
                k--;
                k=max(k, 0);
            }
            else {
                s[k]=x;
                k++;
            }
        }
        for(auto x:t){
            if(x=='#'){
                p--;
                p=max(p,0);
            }
            else {
                t[p]=x;
                p++;
            }
        }
        if(p!=k)return false;
        for(int i=0; i<p; i++){
            if(s[i]!=t[i])return false;
        }
        return true;
    }
};