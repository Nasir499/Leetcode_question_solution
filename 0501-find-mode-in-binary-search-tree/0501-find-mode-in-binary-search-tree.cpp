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
    int currNum=0,currFreq=0,maxFreq=0;
    vector<int> res;
    void dfs(TreeNode *r){
        if(!r) return;
        dfs(r->left);
        if(r->val==currNum){
            currFreq++;
        }else{
            currNum=r->val;
            currFreq=1;
        }
        if(currFreq>maxFreq){
            res={};
            maxFreq=currFreq;
        }
        if(currFreq==maxFreq) res.push_back(r->val);
        dfs(r->right);
    }
    vector<int> findMode(TreeNode* root) {
        dfs(root);
        return res;
    }
};