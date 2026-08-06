class Solution {
public:
    vector<vector<int>> ans;
    vector<int> subset;

    void backtrack(vector<int>& nums, int start) {

        // Current subset is a valid answer
        ans.push_back(subset);

        // Try every remaining element
        for (int i = start; i < nums.size(); i++) {

            // Choose
            subset.push_back(nums[i]);

            // Explore
            backtrack(nums, i + 1);

            // Backtrack (Undo)
            subset.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        backtrack(nums, 0);
        return ans;
    }
};
