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
    vector<int> ans;
    void traverse(TreeNode* root){
        if(!root) return;
        traverse(root->left);
        ans.push_back(root->val);
        traverse(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        traverse(root);
        int n = ans.size();
        map<int,int> mp;
        for(int i=0;i<n;i++){
            if(mp.find(k-ans[i])!=mp.end() && (k-ans[i])!=ans[i]){
                return true;
            }
            else{
                mp[ans[i]]++;
            }
        }
        return false;
    }
};