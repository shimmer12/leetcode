class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int start=0,end=(n-1);
        for(int i=0;i<n;i++){
            if(-nums[start]==nums[end]){
                return nums[end];
            }
            else if(-nums[start]>nums[end]){
                start++;
            }
            else{
                end--;
            }
        }
        return -1;
    }
};
