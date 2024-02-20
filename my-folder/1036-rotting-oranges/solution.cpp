class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        queue<pair<int, int>> q;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        vector<vector<int>> vis=grid;
        int ans = -1;
        int dr[4] = {0,1,0,-1}, dc[4]={1,0,-1,0};
        while(!q.empty()){
            int size = q.size();
            while(size--){
                int r = q.front().first, c = q.front().second;
                q.pop();
                for(int d=0; d<4; d++){
                    int nr = r+dr[d], nc = c+dc[d];
                    if(nr<n && nr>=0 && nc<m && nc>=0 && vis[nr][nc]==1){
                        vis[nr][nc] = 2;
                        q.push({nr, nc});
                    }
                }
            }
            ans++;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(vis[i][j]==1) return -1;
            }
        }
        return ans==-1 ? 0 : ans;
    }
};
