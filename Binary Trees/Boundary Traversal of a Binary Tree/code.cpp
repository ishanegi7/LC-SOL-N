void addLeaves(
        TreeNode* node,
        vector<int>& boundary
    ) {
        if (node == nullptr) {
            return;
        }
        if (isLeaf(node)) {
            boundary.push_back(node->val);
            return;
        }
        addLeaves(node->left, boundary);
        addLeaves(node->right, boundary);
    }
    void addRightBoundary(
        TreeNode* root,
        vector<int>& boundary
    ) {
        TreeNode* current = root->right;
        vector<int> rightBoundary;

        while (current != nullptr) {

            if (!isLeaf(current)) {
                rightBoundary.push_back(current->val);
            }

            if (current->right != nullptr) {
                current = current->right;
            } else {
                current = current->left;
            }
        }

        for (
            int i = rightBoundary.size() - 1;
            i >= 0;
            i--
        ) {
            boundary.push_back(rightBoundary[i]);
        }
    }
class Solution {
private:

    bool isLeaf(TreeNode* node) {
        return node != nullptr
            && node->left == nullptr
            && node->right == nullptr;
    }

    void addLeftBoundary(
        TreeNode* root,
        vector<int>& boundary
    ) {
        TreeNode* current = root->left;

        while (current != nullptr) {

            if (!isLeaf(current)) {
                boundary.push_back(current->val);
            }

            if (current->left != nullptr) {
                current = current->left;
            } else {
                current = current->right;
            }
        }
    }
public:
    vector<int> boundaryTraversal(TreeNode* root) {
        if (root == nullptr) {
            return {};
        }

        vector<int> boundary;

        if (!isLeaf(root)) {
            boundary.push_back(root->val);
        }
        addLeftBoundary(root, boundary);
        addLeaves(root, boundary);
        addRightBoundary(root, boundary);

        return boundary;
    }
};
