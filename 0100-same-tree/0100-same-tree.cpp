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
int ans=0;
class Solution {
public:
    void checkSame(TreeNode* p, TreeNode* q)
    {
        if (p==NULL && q==NULL)
        {
            return;
        }
        if (p==NULL || q==NULL)
        {
            ans=1;
            return;
        }
        checkSame(p->left,q->left);
        if (p->val!=q->val)
        {
            ans=1;
        }
        checkSame(p->right,q->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        ans=0;
        checkSame(p,q);
        if (ans==1)
        {
            return false;
        }
        return true;
    }
};