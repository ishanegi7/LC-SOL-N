class Solution {
    private:
    int getHeight(TreeNode* root, int &maxDiamater){
        if(root==nullptr)return 0;

        int leftHeight= getHeight(root->left, maxDiamater);
     int rightHeight= getHeight(root->right, maxDiamater);

     maxDiamater= max(maxDiamater, leftHeight + rightHeight);

     return 1+ max(leftHeight, rightHeight);

    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
     int maxDiameter=0;
     getHeight(root, maxDiameter);

    return maxDiameter;
      
    }
};
