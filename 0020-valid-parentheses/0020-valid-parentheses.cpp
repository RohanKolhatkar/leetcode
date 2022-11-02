class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.length();
        int c = 0;
        
        // if(s[0]==')' || s[0]=='}' || s[0]==']'){
        //         return false;
        //     }
        // else{
            
           for(int i = 0; i < n; i++){   
            
                if(st.empty() || s[i] == '(' || s[i] == '{' || s[i] == '[')
                {
                    st.push(s[i]);
                    c++;
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
                    c--;
                }
          // } 
        }
        
        if(c == 0)
            return true;
        return false;
    }
};
