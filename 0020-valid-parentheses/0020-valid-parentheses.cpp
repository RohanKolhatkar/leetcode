class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.length();
        
        
        
            
           for(int i = 0; i < n; i++){   
            
                if(st.empty() || s[i] == '(' || s[i] == '{' || s[i] == '[')
                {
                    st.push(s[i]);
                    
                }
                else
                {
                    if(s[i] == ')' && st.top() == '(')
                        st.pop();
                    else if(s[i] == '}' && st.top() == '{')
                        st.pop();
                    else if(s[i] == ']' && st.top() == '[')
                        st.pop();
                    else
                        return false;
                    
                }
           
        }
        
        // if(c == 0)
        //     return true;
        return st.empty();
    }
};
