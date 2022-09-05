

// this is the dfs approach and its easier to implement.
// class Solution { // 16 ms, faster than 98.53%
// public:
//     vector<vector<int>> ans;
//     vector<vector<int>> levelOrder(Node* root) {
//         dfs(root, 0);
//         return ans;
//     }
//     void dfs(Node* root, int level) {
//         if (root == nullptr) return;
//         if (level == ans.size()) ans.emplace_back(); // Need more level -> Add new level
//         ans[level].push_back(root->val);
//         for (Node* child : root->children)
//             dfs(child, level + 1);
//     }
// };

// this is the bfs approach.
class Solution { // 20 ms, faster than 86.78%
public:
    vector<vector<int>> levelOrder(Node* root) {
        if (root == nullptr) return {};
        queue<Node*> q;
        q.push(root);
        vector<vector<int>> ans;
        while (!q.empty()) {
            ans.emplace_back();
            for (int i = q.size(); i >= 1; i--) {
                Node* curr = q.front(); q.pop();
                ans.back().push_back(curr->val);
                for (Node* child : curr->children) {
                    q.push(child);
                }
            }
        }
        return ans;
    }
};



