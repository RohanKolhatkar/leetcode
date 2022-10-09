class Solution {
public:
    bool divisorGame(int n) {
        int x = n - 1;
    // 1 % 2 == 1
    // 2 % 2 == 0
    if (x % 2) return true;


    return false;
    }
};