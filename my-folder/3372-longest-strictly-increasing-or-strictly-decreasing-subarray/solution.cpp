class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n= nums.size();
        
        int ans = 1;
        
        for(int i=0;i<n;i++){
            int prev = nums[i];
            for(int j=i+1;j<n;j++){
                if(nums[j]>prev){
                    ans = max(ans,j-i+1);
                    prev = nums[j];
                }
                else{
                    break;
                }
            }
        }
        
        for(int i=0;i<n;i++){
            int prev = nums[i];
            for(int j=i+1;j<n;j++){
                if(nums[j]<prev){
                    ans = max(ans,j-i+1);
                    prev = nums[j];
                }
                else{
                    break;
                }
            }
        }
        
        return ans;
    }
};
