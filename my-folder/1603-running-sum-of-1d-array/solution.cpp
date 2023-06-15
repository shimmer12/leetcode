class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        vector<int>t;
        for(int i=0;i<n;i++){
            ans=ans+nums[i];
            t.push_back(ans);
        }
        return t;
    }
};
