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
#include <unordered_map>
class Solution {
public:
    vector<int> arr;
    void inorder (TreeNode *root)
    {
        if (root==NULL)
        {
            return;
        }
        inorder(root->left);
        arr.push_back(root->val);
        inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        int i=0;
        TreeNode *dummy=new TreeNode(0);
        TreeNode *current=dummy;
        for (i=0; i<arr.size(); i++)
        {
            current->right=new TreeNode(arr[i]);
            current=current->right;
        }
        return dummy->right;
    }
};