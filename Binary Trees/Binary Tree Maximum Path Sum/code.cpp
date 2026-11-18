class Solution {
private:
    int findMaxGain(
        TreeNode* root,
        int& maxSum
    ) {
        if (root == nullptr) {
            return 0;
        }

        int leftGain = max(0,findMaxGain(root->left, maxSum)
        );

        int rightGain = max(0, findMaxGain(root->right, maxSum)
        );
        int currentPath =root->val+ leftGain + rightGain;
 
        maxSum = max(maxSum,currentPath);
        return root->val + max(
            leftGain,
            rightGain
        );
    }
 
public:
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        findMaxGain(root, maxSum);
 
        return maxSum;
    }
};
