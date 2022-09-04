/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    map<int,map<int,multiset<int>>>mp;
    void dfs(TreeNode* root,int x,int y)
    {
         if(root==NULL)return;
        mp[x][y].insert(root->val);       
        dfs(root->left,x-1,y+1);
        dfs(root->right,x+1,y+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        dfs(root,0,0);
        vector<vector<int>>res;
        
        for(auto it : mp)
        {
            vector<int>cols;
            for(auto t : it.second)
            {
                for (auto x : t.second)
                {
                    cols.push_back(x); 
                }
            }
            res.push_back(cols);
        }
        return res;
    }
};