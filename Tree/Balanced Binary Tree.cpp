pair<int, int> isBalancedWithDepth(TreeNode *root) {
        if (root == NULL) return make_pair(0, 1);
        pair<int, int> left = isBalancedWithDepth(root->left);
        pair<int, int> right = isBalancedWithDepth(root->right);
        int depth = max(right.first, left.first) + 1;
        // The subtree is balanced if right subtree is balanced, left subtree is balanced 
        // and the depth difference is less than 1. 
        int isbalanced = right.second && left.second && (abs(right.first - left.first) < 2);
        return make_pair(depth, isbalanced);
    }
    
    
    int Solution::isBalanced(TreeNode *root) {
        if (root == NULL) return 1;
        return isBalancedWithDepth(root).second;
    }
