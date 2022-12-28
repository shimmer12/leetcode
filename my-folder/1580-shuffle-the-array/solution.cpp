class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int m=nums.size();
        
        vector<int>ans(nums.size());
        int p=0;int j=n;
        for(int i=0; i<m;i++){
       if( i%2!=0){
            ans[i]= nums[j++];
        }else{
            ans[i]=nums[p++];
        }}return ans;
    }
};
