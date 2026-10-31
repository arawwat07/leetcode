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
private:
int fmin;
int smin;
int flag;
public:
    Solution()
    {
        fmin=INT_MAX;
        smin=INT_MAX;
        flag=0;
    }
     void solve(TreeNode* root) {

        if (root == NULL)
            return;

        int temp = root->val;

        if (temp < fmin) {

            if (fmin != INT_MAX) {
                smin = fmin;
                flag = 1;
            }

            fmin = temp;
        }

        else if (temp > fmin && (flag == 0 || temp < smin)) {
            smin = temp;
            flag = 1;
        }

        solve(root->left);
        solve(root->right);
    }

    int findSecondMinimumValue(TreeNode* root) {

        solve(root);

        if (flag == 0)
            {return -1;}

        return smin;
    }
};