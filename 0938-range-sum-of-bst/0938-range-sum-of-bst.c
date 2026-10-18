/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int sum;
void add(struct TreeNode* root, int low, int high)
{
    if (root==NULL)
    {
        return;
    }
    add(root->left,low,high);
    if (root->val >= low && root->val <=high)
    {
        sum=sum+root->val;
    }
    add(root->right,low,high);
}
int rangeSumBST(struct TreeNode* root, int low, int high) {
    sum=0;
    add(root,low,high);
    return sum;
}