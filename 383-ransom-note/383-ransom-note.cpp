// class Solution {
// public:
//     bool canConstruct(string ransomNote, string magazine) {
// 	    // you can also use unordered_map<int, int> m; here
// 		// since we're just dealing with lowercase English letters, 
//         // we can just use an array of length 26 to store the frequency of them
//         int m[26] = {0};
//         // count each character
//         for(char c : magazine) m[c - 'a']++;
        
        
        
//         // check if it can be found in m and substract by 1 
//         for(char c : ransomNote) {
//             m[c-'a']--;
// 			// if it is less than 0, it means it cannot be constructed from magazine
//             if(m[c - 'a'] < 0) return false;
//         }
//         return true;
//     }
// };

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
	   
        int m[26] = {0};
        for(char x : magazine) m[x - 'a']++;      
        for(char x : ransomNote) {
            m[x-'a']--;
            if(m[x - 'a'] < 0) return false;
        }
        return true;
    }
};