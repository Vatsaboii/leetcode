class Solution {
public:
    static TreeNode* lcaDeepestLeaves(TreeNode* r) {
        int maxDepth = -1;
        TreeNode* lca = nullptr;
        const function<int(TreeNode*, int)> dfs = [&maxDepth, &lca, &dfs](TreeNode* n, int d) {
            const int dleft = n->left ? dfs(n->left, d + 1) : d;
            const int dright = n->right ? dfs(n->right, d + 1) : d;
            if (d > maxDepth) maxDepth = d;
            if (dleft == maxDepth && dright == maxDepth) lca = n;
            return max(dleft, dright);
        };
        dfs(r, 0);
        return lca;
    }
};