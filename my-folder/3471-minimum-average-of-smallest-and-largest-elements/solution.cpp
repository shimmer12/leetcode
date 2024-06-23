class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int x=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
                x=min(x,nums[i]+nums[nums.size()-i-1]);

        }
        return x/2.00;
    }
};
