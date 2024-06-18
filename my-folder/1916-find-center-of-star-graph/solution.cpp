class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
int n=edges.size();
vector<vector<int>>ad(n+2);
        for(int i=0;i<edges.size();i++){
            ad[edges[i][0]].push_back(edges[i][1]);
            ad[edges[i][1]].push_back(edges[i][0]);

        }
        for(int i=0;i<=n+1;i++){
            if(ad[i].size()==n)return i;
            
        }
        return 0;
    }
};
