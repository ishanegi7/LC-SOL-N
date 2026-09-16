class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty()) return 0;

        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> height(n + 1, 0);
        int ans = 0;

        for (int i = 0; i < m; i++) {
            stack<int> st;

            for (int j = 0; j <= n; j++) {
                if (j < n)
                    height[j] = (matrix[i][j] == '1') ? height[j] + 1 : 0;
                while (!st.empty() && height[st.top()] > height[j]) {
                    int h = height[st.top()];
                    st.pop();

                    int width = st.empty() ? j : j - st.top() - 1;
                    ans = max(ans, h * width);
                }
                st.push(j);
            }
        }

        return ans;
    }
};
