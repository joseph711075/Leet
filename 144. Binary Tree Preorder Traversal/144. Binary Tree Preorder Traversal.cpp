/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        stack <TreeNode*> s;
        vector<int> ans;
        
        while(!s.empty()||root)
        {
            while(root)
            {
                ans.push_back(root->val);
                s.push(root);
                root=root->left;
            }
            root= s.top();
            s.pop();
            root=root->right;
        }
        
        return  ans;
        
        
    }
};
