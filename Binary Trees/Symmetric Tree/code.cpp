class Solution {
    private:
     bool isMirror(TreeNode* leftNode, TreeNode* rightNode) {
        if (leftNode == nullptr && rightNode == nullptr) {
            return true;
        }
        if (leftNode == nullptr || rightNode == nullptr) {
            return false;
        }
        if (leftNode->val != rightNode->val) {
            return false;
        }
        return isMirror(leftNode->left, rightNode->right) &&
               isMirror(leftNode->right, rightNode->left);
    }
 
public:
  bool isSymmetric(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }
 
        return isMirror(root->left, root->right);
    }
};
