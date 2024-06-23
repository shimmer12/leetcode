class Solution {
public:
     int minimumArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int min_row = n;
        int max_row = 0;
        int min_col = m;
        int max_col = 0;
        for(int i=0 ; i<n ; i++) {
            for(int j=0 ; j<m ; j++) {
                if(grid[i][j] == 1) {
                    min_row = min(min_row, i);
                    max_row = max(max_row, i);
                    min_col = min(min_col, j);
                    max_col = max(max_col, j);
                }
            }
        }
        int ans = (max_row-min_row+1)*(max_col-min_col+1);
        return ans;
    }
};
