class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>vec;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<i;j++){
            if(nums[j]+nums[i] ==target){
                vec.push_back(i);
                 vec.push_back(j);
                         }}
        }return vec;
    }
};
