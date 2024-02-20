class Solution {
public:
   int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int r=0;
        int sum= (n*(n+1))/2;
        int ans= sum-accumulate(nums.begin(),nums.end(),0);
        // for(int i=0;i<n;i++){
        //          r+=nums[i];
        // }
        // int ans = r-sum;


         return abs(ans);
    }
};
