// class Solution {
// public:
//     int scoreOfParentheses(string s) {
//         int n = s.length();
//         int count=0;
        
        
//         // count the numbers of () braces.
//         for(int i=0; i<n-1;i++){
//             if(s[i] == '(' && s[i+1] == ')'){
//                 count++;
//             }
//         }
        
        
//         // go through the code once.
//         if(count == 1) return 1;
//         else if (count*2 == n) return count;
//         else (n == count*2 +2 ) return count*2;  // here  it is for the cases like this. "(())"
//         // this is good approach but this wont work the cases like this -->>>  ( ( ) ( ( ) ) )
//     }
// };

// having a solution by which you can red rid of the remainng one edge case;
// this is the best apprach other than using stack and divide and conquere better use this one. 
class Solution {
public:
    int scoreOfParentheses(string s) {
        int depth = 0, res = 0;
        char prev = '(';
        
        for (const char &ch: s) {
            if (ch == '(')
                depth++;
            else {
                depth--;
                if (prev == '(')
                    res += pow(2, depth);
            }
            
            prev = ch;
        }
        
        return res;
    }
};