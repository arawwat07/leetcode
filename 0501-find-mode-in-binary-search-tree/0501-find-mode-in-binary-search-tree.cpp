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
#include<unordered_map>
class Solution {
public:
    void occur(TreeNode* root, unordered_map<int,int>& freq)
    {
        if (root==NULL)
        {
            return;
        }
        occur(root->left,freq);
        freq[root->val]++;
        occur(root->right,freq);
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> freq;
        occur(root,freq);
        vector<int> ans;
        int high = 0;
        for (auto p : freq) {
            high = max(high, p.second);
        }
        for (auto p : freq) {
        if (p.second == high) {
            ans.push_back(p.first);
        }
    }
    return ans;
    }
};