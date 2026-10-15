/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int num1, num2, diff;
int helper(struct TreeNode* root)
{
    if (root==NULL)
    {
        return 0;
    }
    helper(root->left);
    num2=num1;
    num1=root->val;
    if (num1>=0 && num2>=0)
    {
        if (diff>abs(num1-num2))
        {
            diff=abs(num1-num2);
        }
    }
    helper(root->right);
    return 0;
}
int getMinimumDifference(struct TreeNode* root) {
    num1=INT_MIN; 
    num2=INT_MIN; 
    diff=INT_MAX;
    helper(root);
    return diff;
}