class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int n = matrix.size();        // rows
        int m = matrix[0].size();     // columns

        int row = 0;
        int col = m - 1;              // top-right corner

        while (row < n && col >= 0) {

            if (matrix[row][col] == target) {
                return true;
            }
            else if (matrix[row][col] < target) {
                row++;                // move down
            }
            else {
                col--;                // move left
            }
        }

        return false;
    }
};
