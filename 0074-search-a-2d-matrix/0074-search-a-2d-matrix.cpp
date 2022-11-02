// class Solution {
// private:
//     bool binarysearch(vector<vector<int>> arr , int n , int m, int target){
//         while(i<n){
//             for(int j = 0; i<m; j++ ){
//                 int start = 0, end = m-1;
//                 int mid = (start+end)/2;
//                 while
//             }
//         }
//     }
    
// public:
//     bool searchMatrix(vector<vector<int>>& arr, int target) {
//         int n = arr.size() , m = arr[0].size();   //rows and columns 
//         // do a row wise binary search 
         
//         // you can see this is an nlogn approach why??
//         // binary dearch takes logn time and we are doing it for n times making the tc as nlogn.
        
//         //also using this approach u  are not making an use of second atatement that 
// //         The first integer of each row is greater than the last integer of the previous row.
        
        
        
//     }
// };


// ------------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx-----------second method to solve 
// Use binary search.

// n * m matrix convert to an array => matrix[x][y] => a[x * m + y]

// an array convert to n * m matrix => a[x] =>matrix[x / m][x % m];

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int> > &matrix, int target) {
//         int n = matrix.size();
//         int m = matrix[0].size();
//         int l = 0, r = m * n - 1;
//         while (l != r){
//             int mid = (l + r - 1) >> 1;
//             if (matrix[mid / m][mid % m] < target)
//                 l = mid + 1;
//             else 
//                 r = mid;
//         }
//         return matrix[r / m][r % m] == target;
//     }
// };


// --------------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx--- third method using pattern of binary search tree
// this is  really a sweet solution if you can think of this reallly u are awesome.
// https://leetcode.com/problems/search-a-2d-matrix/discuss/1895837/C%2B%2B-BINARY-SEARCH-TREE-(**)-Explained-with-IMG
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(),
			cols = matrix[0].size(),
            row = 0, col = cols - 1;
			
        while (row < rows && col > -1) {
            int cur = matrix[row][col];
            if (cur == target) return true;
            if (target > cur) row++;
            else col--;
        }
        
        return false;
    }
};