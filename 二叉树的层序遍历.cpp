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
    vector<vector<int>> levelOrder(TreeNode* root) {
        int count = 0;
        vector<vector<int>> res;
        if(root == NULL)
        {
            return res;
        }
        dfsnode(root, res, count);
        return res;
    }

    void dfsnode(TreeNode* node, vector<vector<int>> &res, int count)
    {
        if(count >= res.size())
        {
            vector<int> tmp;
            tmp.push_back(node->val);
            res.push_back(tmp);
        }
        else
        {
            res[count].push_back(node->val);
        }

        int tmpcount = count + 1;
        if(node->left)
        {    
            dfsnode(node->left, res, tmpcount);
        }

        if(node->right)
        {
            dfsnode(node->right, res, tmpcount);
        }
        
        return;
    }
};