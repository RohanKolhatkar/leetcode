/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */

class Solution {
    public boolean hasPathSum(TreeNode root, int targetSum) {
       if(root==null) return false;
        return check(root,0,targetSum);
    }
    
    private boolean check(TreeNode root,int sum,int targetSum ){
        if(root==null) return false;
        sum=sum+root.val;
        if(sum==targetSum && root.left==null && root.right==null) return true;
        return check(root.left,sum,targetSum) || check(root.right,sum,targetSum);
    }
}