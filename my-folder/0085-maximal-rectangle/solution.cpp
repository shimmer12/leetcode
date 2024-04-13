class Solution {
    int largestRectangleArea(vector<int>& heights) {
        std::ios_base::sync_with_stdio(false);
        int n = heights.size();

        int ans = 0;
        stack<pair<int,int>> ST;

        for (int i = 0; i < n; i++) {
            int first = i;

            while (!ST.empty() && ST.top().second > heights[i]) {
                pair<int, int> curr = ST.top();
                ST.pop();
                ans = max(ans, curr.second * (i - curr.first));
                first = curr.first;
            }
            ST.push({first, heights[i]});
        }
        
        while (!ST.empty()) {
            pair<int, int> curr = ST.top();
            ST.pop();
            ans = max(ans, curr.second * (n - curr.first));
        }
        
        return ans;
    }

public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<int> histogram(m, 0);
        int ans = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                histogram[j] = (matrix[i][j] == '1' ? histogram[j] + 1 : 0);
            }
            ans = max(ans, largestRectangleArea(histogram));
        }

        return ans;
    }
};
