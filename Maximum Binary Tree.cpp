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
    
    int findmax(vector<int>& nums,int l,int r)
    {   
        int index = 0;
        int max_= INT_MIN;
        for(int i=l;i<=r;i++)
        {
            if(max_<nums[i])
            {
                max_=nums[i];
                index = i;
            }
        }
            
        return index;
    }
    
    
    TreeNode* constructMaximumBinaryTreehelper(vector<int>& nums,int l, int r)
    {
        if(l>r)
            return 0;
            
        int i = findmax(nums,l,r);
        TreeNode* root = new TreeNode(nums[i]);
        
        root->right =constructMaximumBinaryTreehelper (nums,i+1,r);
        root->left =constructMaximumBinaryTreehelper (nums,l,i-1);
        
        
        return root;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return constructMaximumBinaryTreehelper(nums,0,nums.size()-1);
    }
};
