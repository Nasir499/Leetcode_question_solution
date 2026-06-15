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
    TreeNode* solve(int l,int r,vector<int> &v){
        if(l>r) return nullptr;
        int mid=l+(r-l)/2;
        TreeNode* root=new TreeNode(v[mid]);
        root->left=solve(l,mid-1,v);
        root->right=solve(mid+1,r,v);
        return root;
    }
    void dfs(TreeNode* r,vector<int> &v){
        if(r==nullptr)  return;
        dfs(r->left,v);
        v.push_back(r->val);
        dfs(r->right,v);
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> in;
        dfs(root,in);
        return solve(0,in.size()-1,in);
    }
};