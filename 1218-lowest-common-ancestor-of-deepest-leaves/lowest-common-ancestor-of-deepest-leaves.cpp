class Solution {
public:
    // Helper function to find the depth of the tree
    int getDepth(TreeNode* root) {
        if (!root) return 0;
        return 1 + max(getDepth(root->left), getDepth(root->right));
    }

    // Helper function to find LCA of deepest leaves
    TreeNode* findLCA(TreeNode* root, int depth, int currDepth) {
        if (!root) return nullptr;
        if (currDepth == depth) return root; // Found a deepest leaf

        TreeNode* left = findLCA(root->left, depth, currDepth + 1);
        TreeNode* right = findLCA(root->right, depth, currDepth + 1);

        if (left && right) return root; // If both children contain deepest leaves, root is LCA
        return left ? left : right; // Otherwise, return non-null child
    }

    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        int depth = getDepth(root); // Find maximum depth
        return findLCA(root, depth, 1);
    }
};
