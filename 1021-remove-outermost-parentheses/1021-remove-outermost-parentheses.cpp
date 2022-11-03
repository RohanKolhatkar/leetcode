// class Solution {
// public:
//     string removeOuterParentheses(string s) {
//         // s is always a valid parentesis.
        
        
// //         start with the ( bracket when you encounter the closing backet just check whether they have the 
// //        inner lenth as even ex .(()())   there are two inside valid parenthsis having lenght 4 and so on valid parenthis case use this logic.
//         string ans ="";
//         if(s == "") return ans;
//         if(s == "()") return ans;
//         int n = s.length();
//         // it will have two for loops so not a good thing.
//         for(int i=1; i<n; i++){
//             if(s[i] == ')'){
//                 if(j-i-1 %2 ==0){
                    
//                 }
//             }
//         }
//         // we got the way to solve this problem
        
//     }
// };



                                                    // best methods 
// https://leetcode.com/problems/remove-outermost-parentheses/discuss/815947/c%2B%2B-two-solution-stack-and-with-out-stack(only-slight-modification-in-stack-sol.)
//using stakcs.
// class Solution {
// public:

// string removeOuterParentheses(string S) {
//     stack<char>st;
//     string ans;
//     for(auto a:S)
//     {
//         if(a=='(')
//         {
//             if(st.size()>0)
//             {
//                 ans+='(';
//             }
//             st.push('(');
//         }
//         else
//         {
//             if(st.size()>1)
//             {
//                 ans+=')';
//             }
//             st.pop();
//         }
//     }
//     return ans;
// }
// };

                                         // without using stack. 

class Solution {
public:

string removeOuterParentheses(string S) {
    int st=0;
    string ans;
    for(auto a:S)
    {
        if(a=='(')
        {
            if(st>0)
            {
                ans+='(';
            }
            st++;
        }
        else
        {
            if(st>1)
            {
                ans+=')';
            }
            st--;
        }
    }
    return ans;
}
};