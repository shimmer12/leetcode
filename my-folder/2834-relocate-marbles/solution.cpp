class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        set<int> marblesSet;
        vector<int> ans;
        for (auto x : nums)
            marblesSet.insert(x);
        for (int i = 0; i < moveFrom.size(); i++) {
            marblesSet.erase(moveFrom[i]);
            marblesSet.insert(moveTo[i]);
        }
        for (auto x : marblesSet)
            ans.push_back(x);
        return ans;
    }
};

