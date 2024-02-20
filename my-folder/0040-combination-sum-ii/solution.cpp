class Solution {
public:
    void calcans(vector<int>& candidates, int indx, int target, vector<vector<int>>& ans, vector<int>& ds) {
            if(target == 0) {
                ans.push_back(ds);
                return;
            }
            
        for(int i = indx; i < candidates.size(); i++) {
            if(i > indx && candidates[i] == candidates[i-1]) continue;
            if(candidates[i] > target) return;

            ds.push_back(candidates[i]);
            calcans(candidates, i+1, target - candidates[i], ans, ds);
            ds.pop_back();
        }

    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>ds;
        sort(candidates.begin(),candidates.end());
        calcans(candidates, 0, target,ans,ds);
        return ans;   
    }
};
