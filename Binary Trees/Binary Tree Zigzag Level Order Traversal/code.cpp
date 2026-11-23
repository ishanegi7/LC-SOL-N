class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (root==nullptr)
        return {};

        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        bool leftToRight = true;


        while(!q.empty()){
            int  sz= q.size();
            vector<int> temp;
            temp.reserve(sz);
        
        for(int i=0; i<sz;i++){
            TreeNode* curr= q.front();
            q.pop();
            temp.push_back(curr->val);

            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);

        }
        if(!leftToRight){
            reverse(temp.begin(), temp.end());
        }

        ans.push_back(temp);
        leftToRight =!leftToRight;
    
    }
    return ans;
    }
};
