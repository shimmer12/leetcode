class Solution {
public:
    bool isGood(vector<int>& nums) {
       
        sort(nums.begin(),nums.end());
         long long m = nums.size();
        if(nums[m-1] !=m-1 || nums[m-2]!=m-1)
            return false;
        for(int i=0;i<m-1;i++){
            if(nums[i]!=i+1)
                return false;
            
        }
        return true;
    }
};
