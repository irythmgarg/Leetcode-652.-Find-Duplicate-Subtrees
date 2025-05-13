class Solution {
public:
    string nope(TreeNode* root, unordered_map<string, int>& st, vector<TreeNode*>& ans) {
        if (!root) return "n,";  // null marker
        
        // Recursively get left and right subtree serializations
        string left = nope(root->left, st, ans);
        string right = nope(root->right, st, ans);
        
        // Current subtree serialization
        string str = to_string(root->val) + "," + left + right;
        
        if (st[str] == 1) {
            ans.push_back(root);
        }
        st[str]++;
        
        return str;
    }

    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*> ans;
        unordered_map<string, int> st;
        nope(root, st, ans);
        return ans;
    }
};

