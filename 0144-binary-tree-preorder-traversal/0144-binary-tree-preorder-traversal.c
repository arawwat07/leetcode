/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void helper(struct TreeNode* root, int* ptr, int* i) {
    if (root==NULL)
        {return;}
    ptr[*i]=root->val;
    (*i)++;
    helper(root->left,ptr,i);
    helper(root->right,ptr,i);
}
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int size=101;
    int i=0;
    int *ptr=(int*)malloc(size*sizeof(int));
    helper(root, ptr, &i);
    *returnSize=i;
    return ptr;
}